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
   freopen("cowsignal.in", "r", stdin);
   freopen("cowsignal.out", "w", stdout);
   int r, c, k; cin >> r >> c >> k;
   for (int i =0; i < r; i++) {
      string currow; cin >> currow;
      for (int j = 0; j < k; j++) {
         for (int l = 0; l < c; l++) {
            for (int a = 0; a < k; a++) {
               cout << currow[l];
            }
         }
         cout << endl;
      }
   }
   return 0;
}
