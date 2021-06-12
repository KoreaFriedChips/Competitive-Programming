#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <iomanip>
#include <math.h>
#include <deque>
using namespace std;

#define ll long long
#define pb push_back
#define ull unsigned long long
#define pii pair<int, int>
#define mp make_pair

int main() 
{
  int n; cin >> n;
  double s, x, t, h = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> s >> x >> t;
    h += t*(s*sin(x*M_PI/180));
  }

  double v = sqrt(19.6*h);
  cout << round(v) << endl;
  
  return 0;
}