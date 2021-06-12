#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstring>
#include <climits>
#include <queue>
#include <iomanip>
using namespace std;
#define ll long long
#define pb push_back
#define ull unsigned long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pid pair<int, double>
#define pdi pair<double, int>
#define mp make_pair
#define vi vector<int>
#define endl '\n'
#define F first
#define S second
#define gp greater<pii>
#define MM 10005
#define MOD 1000000013

struct e
{
    int u;
    double v, w;
    e(int u, double v, double w) : u(u), v(v), w(w){};
};

vector<e> adj[MM];
int cnt[MM];
double dis[MM];
void dijkstra(int s)
{
    dis[s] = 0;
    priority_queue<pii, vector<pii>, gp> q;
    q.push(mp(0, s));
    while (!q.empty())
    {
        int v = q.top().S;
        int d_v = q.top().F;
        q.pop();
        for (e edge : adj[v])
        {
            double temp = dis[v] + (double)edge.v / edge.w;
            if (temp < dis[edge.u] || (temp == dis[edge.u] && cnt[v] + 1 <= cnt[edge.u]))
            {
                dis[edge.u] = temp;
                cnt[edge.u] = cnt[v] + 1;
                q.push(mp(dis[edge.u], edge.u));
            }
        }
    }
}
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int a, b, d, s;
        cin >> a >> b >> d >> s;
        adj[a].pb(e(b, d, s));
        adj[b].pb(e(a, d, s));
    }
    fill(begin(dis), end(dis), 1e9);
    dijkstra(1);
    cout << cnt[n] << endl;
    cout << round(60 * dis[n] / 3) << endl;
    return 0;
}
