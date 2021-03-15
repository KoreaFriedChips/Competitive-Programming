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

int main(){
    freopen("pails.in", "r", stdin);
    freopen("pails.out", "w", stdout);
    int x, y, m; cin >> x >> y >> m;
    int ans = 0, i = 0, j = 0;
    for (int i = 0; i*x <= m; i++)
    {
      for (int j = 0; j*y+i*x <= m; j++)
      {
        int amount = i*x+j*y;
        ans = max(ans, amount);
      }
    }
    cout << ans << endl;
    
    return 0;
}
