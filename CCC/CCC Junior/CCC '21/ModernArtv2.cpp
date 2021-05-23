#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <deque>
#include <string>
using namespace std;

#define ll long long
#define pb push_back
#define ull unsigned long long
#define pii pair<int, int>
#define mp make_pair
#define vi vector<int>
#define endl '\n'
#define MM 5000003

int row[MM], col[MM];
int main() 
{
   cin.sync_with_stdio(0);
   cin.tie(0);
    int n, m, k; cin >> n >> m >> k;
    for (int i =0; i < k; i++) {
        char c; int d; cin >> c >> d;
        if (c == 'R')
            row[d]++;
        else if (c == 'C')
            col[d]++;
    }
    int ans = 0;
    for (int i =1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if ((row[i]+col[j])%2 == 1)
                ans++;
        }
    }
    cout << ans << endl;
   return 0;
}