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
#define MM 2005
#define MOD 1000000013

// idea: simple spfa, then check if it's within t, roads only go UNIDIRCTORIAL

int t, n, m, g, dis[MM], food[MM], ans = 0;
bool inque[MM];
vector<pii> adj[MM];
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    cin >> t >> n >> m >> g;
    for (int i = 0; i < g; i++)
    {
        cin >> food[i];
    }
    for (int i = 0; i < m; i++)
    {
        int a, b, w;
        cin >> a >> b >> w;
        adj[a].pb(mp(b, w));
    }
    fill(begin(dis), end(dis), INT_MAX);
    deque<int> q;
    q.pb(0);
    dis[0] = 0;
    while (!q.empty())
    {
        int cur = q.front();
        q.pop_front();
        inque[cur] = false;
        for (pii p : adj[cur])
        {
            if (dis[cur] + p.S < dis[p.F])
            {
                dis[p.F] = dis[cur] + p.S;
                if (!inque[p.F])
                {
                    inque[p.F] = true;
                    q.pb(p.F);
                }
            }
        }
    }
    for (int i = 0; i < g; i++)
    {
        if (dis[food[i]] < t)
            ans++;
    }
    cout << ans << endl;
    return 0;
}