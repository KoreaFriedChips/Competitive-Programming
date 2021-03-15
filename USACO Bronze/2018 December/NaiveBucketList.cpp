#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <deque>
#include <unordered_map>
using namespace std;

#define ll long long
#define pb push_back
#define ull unsigned long long
#define pii pair<int, int>
#define mp make_pair
#define vi vector<int>
#define endl '\n'

pair<pair<int, int>, int> p[103];
int main() 
{
   cin.sync_with_stdio(0);
   cin.tie(0);
   freopen("blist.in", "r", stdin);
   freopen("blist.out", "w", stdout);
   int n; cin >> n;
   for (int i = 0; i < n; i++) {
      int s, t, b; cin >> s >> t >> b;
      p[i] = mp(mp(s, t), b);
   }
   int ans = 0;
   for (int i = 0; i < 1000; i++) {
      int buckets = 0;
      for (int j = 0; j < n; j++) {
         if (p[j].first.first <= i && p[j].first.second >= i) {
            buckets += p[j].second;
         }
      }
      ans = max(ans, buckets);
   }
   cout << ans << endl;
   return 0;
}
