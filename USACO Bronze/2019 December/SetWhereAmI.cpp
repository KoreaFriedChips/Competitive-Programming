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

int n;
string x;
bool in(int l) {
   set<string> s;
   for (int i = 0; i <= n-l; i++) {
      if (s.count(x.substr(i, l)) > 0)
         return true;
      s.insert(x.substr(i, l));
      //cout << x.substr(i, l) << endl;
   }
   return false;
}

int main() 
{
   cin.sync_with_stdio(0);
   cin.tie(0);
   //freopen("whereami.in", "r", stdin);
   //freopen("whereami.out", "w", stdout);
   cin >> n >> x;
   int ans = 1;
   while (in(ans)) {
      ans++;
   }
   cout << ans << endl;
   return 0;
}
