#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
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
#define f first
#define s second
#define MM 51

char a[103][103];
vector<pii> v;
int main() 
{
   cin.sync_with_stdio(0);
   cin.tie(0);
   int n, m = 0; cin >> n;
   for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
         cin >> a[i][j];
         if (a[i][j] != '.') {
            v.pb(mp(i, j));
            m++;
         }
      }
   }
   int ans = 0;
   for (int i = 0; i < m; i++) {
      for (int j = i+1; j < m; j++) {
         for (int k = j+1; k < m; k++) {
            if (v[i].f*(v[j].s-v[k].s) + v[j].f*(v[k].s-v[i].s) + v[k].f*(v[i].s-v[j].s) == 0) {
               ans++;
            }
         }
      }
   }
   cout << ans << endl;
   return 0;
}
