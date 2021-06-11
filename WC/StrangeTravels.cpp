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
#define MM 100005
#define MOD 1000000013

// idea: bfs from 1, bfs from n, should be reachable from both sides or else impossible, ans += dis[s] + rev_dis[s];

int n, m, a, b, k, s, ans = 0;
int dis1[MM], dis2[MM];
vector<int> adj[MM], radj[MM];
void bfs(int dis[], vector<int> adj[])
{
    queue<pii> q;
    q.push(mp(0, 0));
    while (!q.empty())
    {
        pii u = q.front();
        q.pop();
        if (dis[u.F] != -1)
            continue;
        dis[u.F] = u.S;
        for (int v : adj[u.F])
        {
            q.push(mp(v, u.S + 1));
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
        cin >> a >> b;
        a--;
        b--;
        adj[a].pb(b);
        radj[b].pb(a);
    }
    memset(dis1, -1, sizeof(dis1));
    memset(dis2, -1, sizeof(dis2));
    bfs(dis1, adj);
    bfs(dis2, radj);
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        cin >> s;
        s--;
        if (dis1[s] == -1 || dis2[s] == -1)
        {
            cout << -1 << endl;
            return 0;
        }
        ans += dis1[s] + dis2[s];
    }
    cout << ans << endl;
    return 0;
}