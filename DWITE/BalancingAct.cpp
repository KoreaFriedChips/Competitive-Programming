//1122126d2a39
#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <climits>
#include <cmath>
#include <set>
#include <iomanip>
using namespace std;

#define ll long long
#define pb push_back
#define ull unsigned long long
#define endl '\n'
#define pii pair<int, int>
#define vi vector<int>
#define mp make_pair
#define MM 5003

int solve(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += a[i];
    bool dp[n + 1][sum + 1];
    for (int i = 0; i <= n; i++)
        dp[i][0] = true;
    for (int i = 1; i <= sum; i++)
        dp[0][i] = false;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= sum; j++)
        {
            dp[i][j] = dp[i - 1][j];
            if (a[i - 1] <= j)
                dp[i][j] |= dp[i - 1][j - a[i - 1]];
        }
    }
    int ans = 0;
    for (int i = sum / 2; i >= 0; i--)
    {
        if (dp[n][i])
        {
            ans = sum - 2 * i;
            break;
        }
    }
    return ans;
}

int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    for (int i = 0; i < 5; i++)
    {
        int n;
        cin >> n;
        int a[n];
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        cout << solve(a, n) << endl;
    }

    return 0;
}