#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
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
#define MM 51

char a[5][5];
int main() 
{
   cin.sync_with_stdio(0);
   cin.tie(0);
   int sum = 0;
   for (int i = 0; i < 4; i++) {
      cin >> a[i];
   }
   int ans = 0;
   for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
         if ((((int)a[i][j]-'A')%4 != j || ((int)a[i][j]-'A')/4 != i) && a[i][j] != '.') {
            ans += abs(((int)a[i][j]-'A')%4-j)+abs(((int)a[i][j]-'A')/4-i);
         }
      }
   }
   cout << ans << endl;
   return 0;
}
