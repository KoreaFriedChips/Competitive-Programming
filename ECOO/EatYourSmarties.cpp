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
   for (int i = 0; i < 10; i++)
   {
      int a[8] = {}, ans = 0;
      string x;
      while (getline(cin, x))
      {
         if (x == "end of box")
            break;
         else if (x == "red")
            a[7]++;
         else if (x == "orange")
            a[0]++;
         else if (x == "blue")
            a[1]++;
         else if (x == "green")
            a[2]++;
         else if (x == "yellow")
            a[3]++;
         else if (x == "pink")
            a[4]++;
         else if (x == "violet")
            a[5]++;
         else if (x == "brown")
            a[6]++;
      }

      int i = 0;
      while (i != 7)
      {
         ans += 13;
         a[i] -= 7;
         if (a[i] <= 0)
            i++;
      }
      ans += 16*a[7];
      cout << ans << endl;
   }
   
   return 0;
}