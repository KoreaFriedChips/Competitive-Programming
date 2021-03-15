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

int n, height[21], stall[21];

int countBig(int x) {
   int count = 0;
   for (int i = 0; i < n; i++)
   {
      if (stall[i] >= x) {
         count++;
      }
   }
   return count;
}
int main() 
{
   cin.sync_with_stdio(0);
   cin.tie(0);
   cin >> n;
   for (int i = 0; i < n; i++)
   {
      cin >> height[i];
   }
   for (int i = 0; i < n; i++)
   {
      cin >> stall[i];
   }
   sort(height, height+n);
   ll ans = 1;
   for (int i = n-1; i >= 0; i--)
   {
      ans *= countBig(height[i])-(n-1-i);
   }
   cout << ans << endl;
   
   return 0;
}