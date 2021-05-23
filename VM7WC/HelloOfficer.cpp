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

// idea: easy spfa, start of dest node

int n, m, d, q, x, dis[MM];
bool inque[MM];
vector<pii> adj[MM];
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m >> d >> q;
    for (int i = 0; i < m; i++)
    {
        int a, b, w;
        cin >> a >> b >> w;
        adj[a].pb(mp(b, w));
        adj[b].pb(mp(a, w));
    }
    fill(begin(dis), end(dis), INT_MAX);
    deque<int> dq;
    dq.pb(d);
    dis[d] = 0;
    while (!dq.empty())
    {
        int cur = dq.front();
        dq.pop_front();
        inque[cur] = false;
        for (pii p : adj[cur])
        {
            if (dis[cur] + p.S < dis[p.F])
            {
                dis[p.F] = dis[cur] + p.S;
                if (!inque[p.F])
                {
                    inque[p.F] = true;
                    dq.pb(p.F);
                }
            }
        }
    }
    for (int i = 0; i < q; i++)
    {
        cin >> x;
        if (dis[x] == INT_MAX)
            cout
                << -1 << endl;
        else
            cout << dis[x] << endl;
    }
    return 0;
}