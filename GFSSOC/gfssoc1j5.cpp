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
#define MM 1005
#define MOD 1000000007

vector<int> adj[MM];
int n, m, t, k, dis[MM];
bool vis[MM];
queue<int> q;
void bfs(int x, int y)
{
    memset(dis, 0, sizeof(dis));
    memset(vis, false, sizeof(vis));
    q.push(x);
    vis[x] = true;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (int v : adj[u])
        {
            if (!vis[v])
            {
                vis[v] = true;
                dis[v] = dis[u] + 1;
                q.push(v);
            }
        }
    }
}
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m >> t;
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[a].reserve(m);
        adj[a].pb(b);
    }
    cin >> k;
    while (k--)
    {
        int x, y;
        cin >> x >> y;
        bfs(x, y);
        if (vis[y])
            cout << dis[y] * t << endl;
        else
            cout << "Not enough hallways!" << endl;
    }

    return 0;
}