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

pair<string, int> p[103];
int main() 
{
   cin.sync_with_stdio(0);
   cin.tie(0);
   int n, maxi = 0; cin >> n;
   for (int i = 0; i < n; i++) {
      string x; cin >> x;
      int y; cin >> y;
      if (y > maxi) {
         maxi = y;
      }
      p[i] = mp(x, y);
   }

   for (int i = 0; i < n; i++) {
      if (p[i].second == maxi) {
         cout << p[i].first << endl;
         break;
      }
   }
   
   
   return 0;
}