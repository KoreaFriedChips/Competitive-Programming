#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <iomanip>
#include <math.h>
#include <stack>
using namespace std;

#define ll long long
#define pb push_back
#define ull unsigned long long
#define pii pair<int, int>
#define mp make_pair

int a[1003];

int main(){
    int n; cin >> n;
    int odd = 0, even = 0;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      if (a[i] % 2 == 1) {
        odd++;
      } else {
        even++;
      }
    }
    

    while (odd > even)
    {
        odd -= 2;
        even += 1;
    }
    while (even - odd >= 2) {
      even -= 1;
    }
  
    int ans = even + odd;
    //cout << even << " " << odd << endl;
    cout << ans << endl;
    return 0;
}
