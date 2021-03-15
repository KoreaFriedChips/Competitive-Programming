#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <climits>
#include <stack>
#include <deque>
using namespace std;

#define ll long long
#define pb push_back
#define ull unsigned long long
#define pii pair<int, int>
#define mp make_pair

int main() 
{ 
    //freopen("triangles.in", "r", stdin);
    //freopen("triangles.out", "w", stdout);
    int n; cin >> n;
    vector<int> x(n, 0);
    vector<int> y(n, 0);
    for (int i = 0; i < n; i++)
    {
       cin >> x[i] >> y[i];
    }
    
    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                if (y[i] == y[j] && x[i] == x[k]) {
                    int a = (x[j]-x[i]) * (y[k]-y[i]);
                    if (a < 0) a *= -1;
                    if (a > ans) ans = a;
                }
            }
        }
    }
    cout << ans << endl;
    
    return 0; 
} 
