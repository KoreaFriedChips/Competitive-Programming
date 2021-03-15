#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstring>
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

vi pairs[26];
int main() 
{
   cin.sync_with_stdio(0);
   cin.tie(0);
   freopen("circlecross.in", "r", stdin);
   freopen("circlecross.out", "w", stdout);
   string x; cin >> x;
   for (int i = 0; i < 52; i++) {
      pairs[x[i]-'A'].pb(i);
   }

   int ans = 0;
   for (int i = 0; i < 26; i++) {
      for (int j = 0; j < 26; j++) {
         if (i != j) {
            if (pairs[i][0] < pairs[j][0] && pairs[i][1] > pairs[j][0] && pairs[j][1] > pairs[i][1]) { //ABAB
               ans++;
            }
         }
      }
   }
   cout << ans << endl;

   return 0;
}
