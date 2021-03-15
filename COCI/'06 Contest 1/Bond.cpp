#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
#include <iomanip>
#include <queue>
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
#define MM 1003

int n;
double dp[1 << 21];
double prob[21][21];

double solve(int i, int j)
{
    if (i == n)
        return 1.0;
    if (dp[j] != -1)
        return dp[j];
    double ans = 0.0;
    for (int k = 0; k < n; k++)
    {
        if ((j & (1 << k)) > 0)
        {
            double next = prob[i][k] * solve(i + 1, j ^ (1 << k));
            ans = max(ans, next);
        }
    }
    return dp[j] = ans;
}

int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 0; i < 1 << n; i++)
    {
        dp[i] = -1;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            prob[i][j] = x / 100.0;
        }
    }
    cout << fixed << setprecision(6) << solve(0, (1 << n) - 1) * 100 << endl;

    return 0;
}