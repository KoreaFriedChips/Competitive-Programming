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

int c[3], m[3];
void pour(int i, int j) {
   int amount = min(m[i], c[j]-m[j]);
   m[i] -= amount;
   m[j] += amount;
}
int main() 
{
   cin.sync_with_stdio(0);
   cin.tie(0);
   freopen("mixmilk.in", "r", stdin);
   freopen("mixmilk.out", "w", stdout);
   for (int i = 0; i < 3; i++) {
      cin >> c[i] >> m[i];
   }
   for (int i = 0; i < 100; i++) {
      pour(i%3, (i+1)%3);
   }
   for (int i = 0; i < 3; i++) {
      cout << m[i] << endl;
   }
   return 0;
}
