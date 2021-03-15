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

int S[103], T[103], B[103];
int start[1003], finish[1003];

int solve(void) {
   int buckets = 0, count = 0;
   for (int i = 1; i <= 1000; i++) {
      if (start[i] != 0)
         count += B[start[i]];
      buckets = max(buckets, count);
      if (finish[i] != 0)
         count -= B[finish[i]];
   }
   return buckets;
}

int main() 
{
   cin.sync_with_stdio(0);
   cin.tie(0);
   freopen("blist.in", "r", stdin);
   freopen("blist.out", "w", stdout);
   int n; cin >> n;
   for (int i = 1; i <= n; i++) {
      cin >> S[i] >> T[i] >> B[i];
      start[S[i]] = i;
      finish[T[i]] = i;
   }
   int ans = solve();
   cout << ans << endl;
   return 0;
}
