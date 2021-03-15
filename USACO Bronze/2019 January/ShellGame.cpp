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
#define MM 5000003

int main() 
{
   cin.sync_with_stdio(0);
   cin.tie(0);
   freopen("shell.in", "r", stdin);
   freopen("shell.out", "w", stdout);
   int arr[3][3] = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};
   int n; cin >> n;
   int ans = 0;
   int ca = 0, cb = 0, cc = 0;
   for (int j = 0; j < n; j++) {
      int a, b, g; cin >> a >> b >> g;
      swap(arr[0][a-1], arr[0][b-1]);
      if (arr[0][g-1] == 1)
         ca++;
      swap(arr[1][a-1], arr[1][b-1]);
      if (arr[1][g-1] == 1)
         cb++;
      swap(arr[2][a-1], arr[2][b-1]);
      if (arr[2][g-1] == 1)
         cc++;
   }
   ans = max(ca, max(cb, cc));
   cout << ans << endl;
   return 0;
}
