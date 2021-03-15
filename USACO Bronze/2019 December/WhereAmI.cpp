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
    freopen("whereami.in", "r", stdin);
    freopen("whereami.out", "w", stdout);
    int n; cin >> n;
    string x; cin >> x;

    for (int i = 1; i <= n; i++)
    {
        bool good = true;
        for (int j = 0; j+i <= n; j++)
        {
            for (int k = 0; k < j; k++)
            {
                if (x.substr(j, i) == x.substr(k, i)) {
                    good = false;
                }
            }
        }
        if (good) {
            cout << i << endl;
            break;
        }
    }
    
    return 0;
} 
