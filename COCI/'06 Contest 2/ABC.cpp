#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
#include <cmath>
#include <queue>
#include <string>
#include <bitset>
#include <deque>
using namespace std;

#define ll long long
#define pb push_back
#define ull unsigned long long
#define pii pair<int, int>
#define mp make_pair
#define vi vector<int>
#define endl '\n'
#define MOD 1000000007
#define MM 53
#define row first
#define col second


int main() 
{
   cin.sync_with_stdio(0);
   cin.tie(0);
   int a, b, c; cin >> a >> b >> c;
   if (c < b) swap(c, b);
   if (c < a) swap(c, a);
   if (b < a) swap(b, a);

   string x; cin >> x;
   for (int i = 0; i < x.length(); i++) {
      if (x[i] == 'A')
         cout << a << " ";
      else if (x[i] == 'B')
         cout << b << " ";
      else if (x[i] == 'C') {
         cout << c << " ";
      }
   }
   cout << endl;

   return 0;
}