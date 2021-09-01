#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
#define ll long long
#define pb push_back
#define ull unsigned long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pic pair<int, char>
#define mp make_pair
#define vi vector<int>
#define endl '\n'
#define F first
#define S second
#define gp greater<pii>
#define all(x) (x).begin(), (x).end()
#define MM 100005
#define MOD 1000000007

// idea : dp + mono q

int n, m, j, t[MM], dp[MM], ans = INT_MAX;
deque<int> q;
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m >> j;
    fill(begin(t), end(t), INT_MAX);
    fill(begin(dp), end(dp), INT_MAX);
    t[0] = dp[0] = 0;
    for (int i = 0, a, b; i < m; i++)
    {
        cin >> a >> b;
        t[a] = b;
    }
    q.pb(0);
    for (int i = 1; i <= n; i++)
    {
        while (!q.empty() && i - q.front() > j)
            q.pop_front();
        dp[i] = max(dp[q.front()], t[i]);
        while (!q.empty() && a[dp.back()] >= a[i])
            q.pop_back();
        q.pb(i);
    }
    for (int i = n - j + 1; i <= n; i++)
        ans = min(ans, dp[i]);
    cout << (ans == INT_MAX ? -1 : ans) << endl;
    return 0;
}