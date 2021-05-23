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
#define MM 500005
#define MOD 1000000013

int dp[MM], a[MM], dis[MM], n;
int fib(int n)
{
    if (dp[n] == -1)
    {
        if (n <= 1)
            dp[n] = n;
        else
            dp[n] = fib(n - 1) + fib(n - 2);
    }
    return dp[n] % 2021;
}
int bfs()
{
    memset(dis, -1, sizeof(dis));
    queue<int> q;
    q.push(1);
    dis[1] = 0;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        int x = a[u];
        if (1 <= u + x && u + x <= n && dis[u + x] == -1)
        {
            dis[u + x] = dis[u] + 1;
            q.push(u + x);
        }
        if (1 <= u - x && u - x <= n && dis[u - x] == -1)
        {
            dis[u - x] = dis[u] + 1;
            q.push(u - x);
        }
        if (1 <= u + 1 && u + 1 <= n && dis[u + 1] == -1)
        {
            dis[u + 1] = dis[u] + 1;
            q.push(u + 1);
        }
        if (1 <= u - 1 && u - 1 <= n && dis[u - 1] == -1)
        {
            dis[u - 1] = dis[u] + 1;
            q.push(u - 1);
        }
    }
    return dis[n];
}

ll ans = 0, cnt = 1;
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    memset(dp, -1, sizeof(dp));
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        a[i] = fib(i) + (i % 50);
    }
    cout << bfs() << endl;

    return 0;
}