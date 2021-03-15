#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <set>
#include <math.h>
#include <queue>
using namespace std;

#define ll long long
#define pb push_back
#define ull unsigned long long
#define pii pair<int, int>
#define mp make_pair

int arr[101];
int main(){
   cin.sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   for (int i = 0; i < n; i++) {
      cin >> arr[i];
   }
   sort(arr, arr+n);
   reverse(arr, arr+n);

   int count = 0, ans = 0;
   for (int i = 0; i < n; i++) {
      if (arr[i] <= 100) {
         ans += arr[i];
         count++;
      }
      if (count == 2) {
         break;
      }
   }
   cout << ans << endl;
   
   return 0;
}