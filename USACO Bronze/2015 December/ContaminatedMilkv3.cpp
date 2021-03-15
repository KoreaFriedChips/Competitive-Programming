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

//10/10 test cases

int a[51][51], badmilk[51];
int main() 
{
   cin.sync_with_stdio(0);
   cin.tie(0);
   freopen("badmilk.in", "r", stdin);
   freopen("badmilk.out", "w", stdout);
   int n, m, d, s; cin >> n >> m >> d >> s;
   for (int i = 1; i <= m; i++) { //set all milk to bad
      badmilk[i] = 1;
   }
   for (int i = 0; i <= 50; i++) { //fill arr
      for (int j = 0; j <= 50; j++) {
         a[i][j] = 101;
      }
   }

   for (int i =0; i < d; i++) { //get input
      int p, m, t; cin >> p >> m >> t;
      a[p][m] = t; //person milk table
   }
   for (int i = 0; i < s; i++) {
      int p, t; cin >> p >> t;
      for (int j = 1; j <= m; j++) {
         if (a[p][j] >= t) {
            badmilk[j] = 0; //the milk can't be bad 
         }
      }
   }

   int ans = 0; 
   for (int i = 1; i <= m; i++) {
      if (badmilk[i] == 1) { //if the milk can be bad
         int count = 0;
         for (int j = 1; j <= n; j++) {
            if (a[j][i] != 101) { //if they drank this type of milk before
               count++;
            }
         }
         if (count > ans)
            ans = count;
      }
   }
   cout << ans << endl;
   return 0;
}
