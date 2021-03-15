#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <set>
#include <math.h>
#include <queue>
using namespace std;

#define ll long long
#define pb push_back
#define ull unsigned long long
#define pii pair<int, int>
#define mp make_pair

int a[101];
int main(){
   cin.sync_with_stdio(0);
   cin.tie(0);
   int n, m; cin >> n >> m;
   for (int i = 0; i < n; i++) {
      cin >> a[i];
   }
   sort(a, a+n);

   int ans = 0;
   for (int i = 0; i < n; i++) {
      if (a[i] <= m) {
         ans += a[i];
      }
      else if (a[i] > m) {
         break;
      }
   }
   cout << ans << endl;
   
   return 0;
}