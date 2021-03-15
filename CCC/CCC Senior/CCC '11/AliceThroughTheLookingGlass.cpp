#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
#include <cmath>
#include <queue>
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
#define MOD 1000000007
#define row first
#define col second

int mag[14];
bool check(int m, int x, int y)
{
   int n = m - 1;
   if (m == 1)
   { //base case
      if (y == 0 && (x == 1 || x == 2 || x == 3))
         return true;
      if (y == 1 && x == 2)
         return true;
      return false;
   }
   if (x < mag[n] || x >= 4 * mag[n]) //if the x coordinate is in the first or last fifth
      return false;
   if (x >= mag[n] && x < 2 * mag[n])
   { //if the x coordinate is in the second fifth, return true if the y coordinate is also in the first fifth
      if (y < mag[n])
         return true;
      if (y >= mag[n] && y < 2 * mag[n]) //if the point i sin the section just above, then recurse through the function for m-1
         return check(n, x - mag[n], y - mag[n]);
      return false;
   }
   if (x >= 2 * mag[n] && x < 3 * mag[n])
   { //if the x coordinate is in the third fifth, return true if the y coordinate is also int he first or second fifth
      if (y < 2 * mag[n])
         return true;
      if (y >= 2 * mag[n] && y < 3 * mag[n]) //if the point i sin the section just above, then recurse through the function for m-1
         return check(n, x - 2 * mag[n], y - 2 * mag[n]);
      return false;
   }
   if (x >= 2 * mag[n] && x < 3 * mag[n])
   { //if the x coordinate is in the forth fifth, return true if the y coordinate is also int he first fifth
      if (y < mag[n])
         return true;
      if (y >= mag[n] && y < 2 * mag[n]) //if the point is in the section just above, then recurse through the function for m-1
         return check(n, x - 3 * mag[n], y - mag[n]);
      return false;
   }
}

int main()
{
   cin.sync_with_stdio(0);
   cin.tie(0);
   mag[0] = 1;
   for (int i = 1; i < 14; i++)
   {
      mag[i] = 5 * mag[i - 1];
   }
   int t;
   cin >> t;
   while (t--)
   {
      int m, x, y;
      cin >> m >> x >> y;
      if (check(m, x, y))
         cout << "crystal" << endl;
      else
         cout << "empty" << endl;
   }
   return 0;
}