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

int a[103];
int main() 
{
   cin.sync_with_stdio(0);
   cin.tie(0);
   freopen("sleepy.in", "r", stdin);
   freopen("sleepy.out", "w", stdout);
   int n; cin >> n;
   for (int i =0; i < n; i++) {
      cin >> a[i];
   }
   int ans = n-1;
   for (int i = n-2; i >= 0; i--) {
      if (a[i] < a[i+1])
         ans = i;
      else 
         break;
   }
   cout << ans << endl;

   return 0;
}
