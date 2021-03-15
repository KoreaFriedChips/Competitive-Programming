#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <set>
#include <iomanip>
#include <queue>
using namespace std;

#define ll long long
#define pb push_back
#define ull unsigned long long
#define pii pair<int, int>
#define mp make_pair

int main() {
   cin.sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   string x;
   int take = 0, late = 0;
   while (cin >> x)
   {  
      if (x == "EOF")
         break;
      else if (x == "TAKE") {
         n++;
         if (n > 999) {
            n == 1;
         }
         take++;
         late++;
      }
      else if (x == "SERVE") {
         take--;
      }
      else if (x == "CLOSE") {
         cout << late << " " << take << " " << n << '\n';
         late = 0; take = 0;
      }
   }
   
   
   
   return 0;
}