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

int a[101];
int main(){
   cin.sync_with_stdio(0);
   cin.tie(0);
   int a, b; cin >> a >> b;
   if (a <= 100 && a >= 90) {
      if (b <= 100 && b >= 90) cout << "Same" << endl;
      else cout << "Different" << endl;
   }
   else if (a <= 89 && a >= 80) {
      if (b <= 89 && b >= 80) cout << "Same" << endl;
      else cout << "Different" << endl;
   }
   else if (a <= 79 && a >= 70) {
      if (b <= 79 && b >= 70) cout << "Same" << endl;
      else cout << "Different" << endl;
   }
   else if (a <= 69 && a >= 60) {
      if (b <= 69 && b >= 60) cout << "Same" << endl;
      else cout << "Different" << endl;
   }
   else if (a <= 59) {
      if (b <= 59) cout << "Same" << endl;
      else cout << "Different" << endl;
   }
   
   return 0;
}