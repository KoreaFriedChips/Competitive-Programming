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

int c[101];
int main(){
   cin.sync_with_stdio(0);
   cin.tie(0);
   int n, m; cin >> n >> m;
   for (int i = 0; i < m; i++)
   {
      cin >> c[i];
   }
   
   int ans = 2, pos = c[0];
   for (int i = 1; i < m; i++)
   {
      if (abs(pos-c[i]) == 1) {
         ans += 1;
         pos = c[i];
      } else {
         ans += 2;
         pos = c[i];
      }
   }
   cout << ans << endl;
   
   return 0;
}