#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <deque>
#include <string>
using namespace std;

#define ll long long
#define pb push_back
#define ull unsigned long long
#define pii pair<int, int>
#define mp make_pair
#define vi vector<int>
#define endl '\n'

deque<string> v;
int main() 
{
   cin.sync_with_stdio(0);
   cin.tie(0);
   string n;
   while (cin >> n)
   {
      if (n == "99999") {
         return 0;
      }
      string dir = n.substr(0, 2);
      string steps = n.substr(2);
      int d = (dir[0]-'0')+(dir[1]-'0');
      if (d%2 == 0 && d != 0) {
         cout << "right " << steps << endl;
         v.pb("right");
      } else if (d == 0) {
         cout << v.back() << " " << steps << endl;
      } else {
         cout << "left " << steps << endl;
         v.pb("left");
      }
   }
   
   
   return 0;
}