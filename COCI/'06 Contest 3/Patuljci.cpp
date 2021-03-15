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

int a[9];
int main() 
{
   cin.sync_with_stdio(0);
   cin.tie(0);
   int sum = 0;
   for (int i = 0; i < 9; i++) {
      cin >> a[i];
      sum += a[i];
   }
   int not1, not2;
   for (int i = 0; i < 9; i++) {
      for (int j = 0; j < 9; j++) {
         if (sum - a[j] - a[i] == 100 && j != i) {
            not1 = a[i];
            not2 = a[j];
            break;
         }
      }
   }
   for (int i = 0; i < 9; i++) {
      if (a[i] != not1 && a[i] != not2) {
         cout << a[i] << endl;
      }
   }
   return 0;
}
