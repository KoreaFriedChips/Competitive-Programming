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
#define MM 10005
#define MOD 1000000013

// idea: game theory --> if the number of losing children nodes is odd we win, the last person has to take the losing state

int n, a, b, c, d;
vector<int> adj[MM];

bool dfs(int u, int p)
{
    int cnt = 0;
    for (int v : adj[u])
    {
        if (v == p)
            continue;
        if (!dfs(v, u))
            cnt++;
    }
    return cnt % 2 != 0;
}

int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> a >> b;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    cin >> c >> d;
    if (dfs(c, d) || dfs(d, c))
        cout << "Let's play >:)" << endl;
    else
        cout << "NOU >:(" << endl;

    return 0;
}