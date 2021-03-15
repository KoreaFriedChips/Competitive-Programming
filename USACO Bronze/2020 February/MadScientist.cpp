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
    freopen("breedflip.in", "r", stdin);
    freopen("breedflip.out", "w", stdout);
    int n; cin >> n;
    string a, b; cin >> a >> b;

    int ans = 0; bool flag = false;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i]) {
            if (!flag) {
                flag = true;
                ans++;
            }
        } else {
            flag = false;
        }
    }
    cout << ans << endl;
        
    return 0; 
} 
