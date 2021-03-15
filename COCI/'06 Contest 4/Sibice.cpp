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

int main() 
{
   cin.sync_with_stdio(0);
   cin.tie(0);
   int n, w, h; cin >> n >> w >> h;
   while (n--) {
      int t; cin >> t;
      if (t*t <= w*w + h*h)
         cout << "DA" << endl;
      else {
         cout << "NE" << endl;
      }
   }
   return 0;
}
