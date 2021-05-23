#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <queue>
#include <string>
using namespace std;

#define ll long long
#define pb push_back
#define ull unsigned long long
#define pii pair<int, int>
#define mp make_pair
#define vi vector<int>
#define endl '\n'

int main() 
{
   cin.sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   int ans = 5*n-400;
   if (ans > 100) {
      cout << ans << endl;
      cout << -1 << endl;
   } else if (ans < 100) {
      cout << ans << endl;
      cout << 1 << endl;
   } else {
      cout << ans << endl;
      cout << 0 << endl;
   }
   
   return 0;
}