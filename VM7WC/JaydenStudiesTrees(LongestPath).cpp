#include <bits/stdc++.h>
#include <unordered_map>
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
#define all(x) (x).begin(), (x).end()
#define MM 10005
#define MOD 1000000007

vector<int> adj[MM];
int n, u, v, dis[MM];
queue<int> q;

pii bfs(int x)
{
    int dist = 0, node = 0;
    memset(dis, -1, sizeof(dis));
    q.push(x);
    dis[x] = 0;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (int v : adj[u])
        {
            if (dis[v] == -1)
            {
                q.push(v);
                dis[v] = dis[u] + 1;
                if (dis[v] > dist)
                {
                    dist = dis[v];
                    node = v;
                }
            }
        }
    }
    return mp(node, dist);
}
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    pii pf = bfs(u);
    pii ps = bfs(pf.F);
    cout << ps.S << endl;

    return 0;
}