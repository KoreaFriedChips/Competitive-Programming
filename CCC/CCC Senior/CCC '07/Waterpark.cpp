#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
#include <iomanip>
#include <queue>
#include <climits>
using namespace std;

#define ll long long
#define pb push_back
#define ull unsigned long long
#define pii pair<int, int>
#define mp make_pair
#define vi vector<int>
#define endl '\n'
#define F first
#define S second
#define MM 100003

int dp[MM];
vi adj[MM];
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    while (true)
    {
        int x, y;
        cin >> x >> y;
        if (x == 0)
            break;
        adj[x].pb(y);
    }
    dp[1] = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < adj[i].size(); j++)
        {
            int next = adj[i][j];
            dp[next] += dp[i];
        }
    }
    cout << dp[n] << endl;

    return 0;
}