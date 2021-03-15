#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <deque>
#include <set>
using namespace std;

#define ll long long
#define pb push_back
#define ull unsigned long long
#define pii pair<int, int>
#define mp make_pair
#define vi vector<int>
#define endl '\n'

vi road;
vi bessie;
int main() 
{
   cin.sync_with_stdio(0);
   cin.tie(0);
   freopen("speeding.in", "r", stdin);
   freopen("speeding.out", "w", stdout);
   int n, m; cin >> n >> m;
   int x, y; 
   for (int i = 1; i <= n; i++) {
      cin >> x >> y;
      for (int j = 1; j <= x; j++) {
         road.pb(y);
      }
   }
   for (int i = 1; i <= m; i++) {
      cin >> x >> y;
      for (int j = 1; j <= x; j++) {
         bessie.pb(y);
      }
   }
   int ans = 0;
   for (int i = 0; i < 100; i++) {
      ans = max(ans, bessie[i]-road[i]);
   }
   cout << ans << endl;
   return 0;
}
