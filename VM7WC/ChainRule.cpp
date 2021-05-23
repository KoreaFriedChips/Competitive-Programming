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

// idea: spfa from 1 (dis1), spfa from n-1 (dis2)

int n, m, dis1[MM], dis2[MM], ans = 0;
bool inque[MM];
vector<pii> adj[MM];
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int a, b, w;
        cin >> a >> b >> w;
        adj[a].pb(mp(b, w));
        adj[b].pb(mp(a, w));
    }
    fill(begin(dis1), end(dis1), INT_MAX);
    fill(begin(dis2), end(dis2), INT_MAX);
    deque<int> q;
    q.pb(0);
    dis1[0] = 0;
    while (!q.empty())
    {
        int cur = q.front();
        q.pop_front();
        inque[cur] = false;
        for (pii p : adj[cur])
        {
            if (dis1[cur] + p.S < dis1[p.F])
            {
                dis1[p.F] = dis1[cur] + p.S;
                if (!inque[p.F])
                {
                    inque[p.F] = true;
                    q.pb(p.F);
                }
            }
        }
    }
    dis2[n - 1] = 0;
    q.pb(n - 1);
    while (!q.empty())
    {
        int cur = q.front();
        q.pop_front();
        inque[cur] = false;
        for (pii p : adj[cur])
        {
            if (dis2[cur] + p.S < dis2[p.F])
            {
                dis2[p.F] = dis2[cur] + p.S;
                if (!inque[p.F])
                {
                    inque[p.F] = true;
                    q.pb(p.F);
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        ans = max(ans, dis1[i] + dis2[i]);
    }
    cout << ans << endl;
    return 0;
}