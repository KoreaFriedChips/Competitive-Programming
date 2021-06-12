#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <set>
#include <iomanip>
#include <set>
using namespace std;

#define ll long long
#define pb push_back
#define ull unsigned long long
#define pii pair<int, int>
#define mp make_pair
#define row first
#define col second

int n;
int a[21];
int b[21];
int countBig(int x) {
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (b[i] >= x) count++;
    }
    return count;
}

int main() 
{
   cin >> n;
   for (int i = 0; i < n; i++)
   {
       cin >> a[i];
   }
   for (int i = 0; i < n; i++)
   {
       cin >> b[i];
   }
   sort(a, a+n);

    ll ans = 1;
   for (int i = n-1; i >= 0; i--)
   {
       ans *= countBig(a[i]) - (n-1-i);
   }
   
   cout << ans << endl;

   return 0;
}