#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
#include <cmath>
#include <queue>
#include <string>
#include <set>
using namespace std;

#define ll long long
#define pb push_back
#define ull unsigned long long
#define pii pair<int, int>
#define mp make_pair
#define vi vector<int>
#define endl '\n'
#define MOD 1000000007
#define row first
#define col second

char a[31], b[31], ans[31];
int main() 
{
   cin.sync_with_stdio(0);
   cin.tie(0);
   int n, m; cin >> n >> m;
   cin >> a >> b;
   int t; cin >> t;

   int x = 0;
   for (int i = 0; i < n; i++) {
      x = n-i-1;
      x += min(max(t-i, 0), m);
      ans[x] = a[i];
   }
   for (int i = 0; i < m; i++) {
      x = n+i;
      x -= min(max(t-i, 0), n);
      ans[x] = b[i];
   }
   ans[n+m] = ' ';
   cout << ans << endl;


   return 0;
}
