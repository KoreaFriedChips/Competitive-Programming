#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstring>
#include <climits>
#include <queue>
#include <set>
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

// idea: dijkstra from 1, reverse dijkstra from n on a reverse graph, ans = min(dis[from] + rdis[to] + weight)

struct e
{
    int u, v, w;
    e(int u, int v, int w) : u(u), v(v), w(w){};
};

const int INF = 1000000000;
vector<e> adj[MM], radj[MM], cc;
int dis[MM], rdis[MM];
bool vis[MM];
int n, m, d;
void dijkstra(int s, int d[], vector<e> adj[])
{
    fill(d, d + MM, INF);
    memset(vis, false, sizeof(vis));
    priority_queue<pii, vector<pii>, gp> q;
    d[s] = 0;
    q.push(mp(0, s));
    while (!q.empty())
    {
        int v = q.top().S;
        q.pop();
        if (vis[v])
            continue;
        vis[v] = true;
        for (e edge : adj[v])
        {
            int to = edge.v, len = edge.w;
            if (d[v] + len < d[to])
            {
                d[to] = d[v] + len;
                q.push(mp(d[to], to));
            }
        }
    }
}
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int a, b, w;
        cin >> a >> b >> w;
        adj[a].pb(e(a, b, w));
        radj[b].pb(e(b, a, w));
    }
    cin >> d;
    for (int i = 0; i < d; i++)
    {
        int a, b, w;
        cin >> a >> b >> w;
        cc.pb(e(a, b, w));
    }
    dijkstra(1, dis, adj);
    dijkstra(n, rdis, radj);
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << dis[i] << " " << rdis[i] << endl;
    // }
    int ans = min(dis[n], rdis[1]);
    for (e edge : cc)
    {
        ans = min(ans, dis[edge.u] + edge.w + rdis[edge.v]);
    }
    if (ans == INF)
        ans = -1;
    cout << ans << endl;
    return 0;
}