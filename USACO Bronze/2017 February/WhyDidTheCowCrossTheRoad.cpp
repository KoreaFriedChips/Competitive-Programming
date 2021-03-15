#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstring>
#include <queue>
using namespace std;

#define ll long long
#define pb push_back
#define ull unsigned long long
#define pii pair<int, int>
#define mp make_pair
#define vi vector<int>
#define endl '\n'
#define MM 51

int cow[11];
int main() 
{
   cin.sync_with_stdio(0);
   cin.tie(0);
   freopen("crossroad.in", "r", stdin);
   freopen("crossroad.out", "w", stdout);
   int n, ans = 0; cin >> n;
   for (int i = 0; i < n; i++) {
      int x, y; cin >> x >> y;
      y++;
      if (cow[x] > 0 && cow[x] != y) {
         ans++;
      }
      cow[x] = y;
   }
   cout << ans << endl;
   return 0;
}
