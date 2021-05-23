#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define ull unsigned long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define mp make_pair
#define vi vector<int>
#define endl '\n'
#define F first
#define S second
#define gp greater<pii>
#define MM 1000005
#define MOD 1000000

ll n, a[MM], dp[MM];
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        int x = MM, y = MM, z = dp[i - 1] + a[i];
        if (i >= 3)
            x = dp[i - 3] + a[i] + a[i - 1] + a[i - 2] - min(a[i], min(a[i - 1], a[i - 2])) * 0.5;
        if (i >= 2)
            y = dp[i - 2] + a[i] + a[i - 1] - min(a[i], a[i - 1]) * 0.25;
        dp[i] = min(x, min(y, z));
    }
    cout << dp[n] << endl;
    return 0;
}