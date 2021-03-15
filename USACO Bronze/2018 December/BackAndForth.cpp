#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <deque>
#include <set>
using namespace std;

#define ll long long
#define pb push_back
#define ull unsigned long long
#define pii pair<int, int>
#define mp make_pair
#define vi vector<int>
#define endl '\n'

set<int> ans;
vi barn1, barn2;
void day4(vi a, vi b, int amount) {
   for (int i = 0; i < b.size(); i++) {
      int x = b[i];
      ans.insert(amount+x);
   }
}
void day3(vi a, vi b, int amount) {
   for (int i = 0; i < a.size(); i++) {
      int x = a[i];
      vi newb = b; newb.pb(x);
      vi newa = a; newa.erase(newa.begin()+i);
      day4(newa, newb, amount-x); 
   }
}
void day2(vi a, vi b, int amount) {
   for (int i = 0; i < b.size(); i++) {
      int x = b[i];
      vi newa = a; newa.pb(x);
      vi newb = b; newb.erase(newb.begin()+i);
      day3(newa, newb, amount+x); 
   }
}
void day1(vi a, vi b, int amount) {
   for (int i = 0; i < a.size(); i++) {
      int x = a[i];
      vi newb = b; newb.pb(x);
      vi newa = a; newa.erase(newa.begin()+i);
      day2(newa, newb, amount-x); 
   }
}

int main() 
{
   cin.sync_with_stdio(0);
   cin.tie(0);
   freopen("backforth.in", "r", stdin);
   freopen("backforth.out", "w", stdout);
   int x;
   for (int i =0; i < 10; i++) {
      cin >> x; barn1.pb(x);
   }
   for (int i =0; i < 10; i++) {
      cin >> x; barn2.pb(x);
   }
   day1(barn1, barn2, 1000);
   
   cout << ans.size() << endl;
   return 0;
}
