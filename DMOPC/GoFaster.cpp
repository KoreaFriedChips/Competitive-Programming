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

vector<pii> v;
int main() 
{ 
    int n; cin >> n;
    for (int i = 0; i < n-1; i++)
    {
        int x, y; cin >> x >> y;
        v.pb(mp(x, y));
    }

    int best = v[0].first, worst = v[0].first;
    int total = v[0].first;
    for (int i = 1; i < n-1; i++)
    {
        if (i == 1) {
            best -= v[i].second;
            worst -= v[i].second;
        } else {
            worst -= v[i].second;
            if (total-best < v[i].second) {
                best -= total - v[i].second;
            }
        }
        total -= v[i].second;
        total += v[i].first;
    }

    if (worst < 0) cout << 0 << endl;
    else cout << worst << endl;

    if (best < 0) cout << 0 << endl;
    else cout << best << endl;
    
    
    return 0;
} 
