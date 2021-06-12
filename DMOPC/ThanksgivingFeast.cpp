#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstring>
#include <climits>
#include <queue>
#include <map>
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
//idea: bfs from a, then bfs from b, ans = min(ans, a_dis[shop_i], b_dis[sjop_i])
int N, M, K, A, B;
vi adj[MM], dest;
bool vis[MM];
int adis[MM], bdis[MM];
void bfs(int x, int dis[])
{
    fill(vis + 1, vis + MM, false);
    fill(dis + 1, dis + MM, 1e9);
    queue<int> q;
    vis[x] = true;
    dis[x] = 0;
    q.push(x);
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
    cout.tie(0);
    cin >> N >> M >> K >> A >> B;
    for (int i = 0; i < K; i++)
    {
        int x;
        cin >> x;
        dest.pb(x);
    }
    for (int i = 0; i < M; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    bfs(A, adis);
    bfs(B, bdis);
    int ans = INT_MAX;
    for (int i : dest)
    {
        ans = min(ans, adis[i] + bdis[i]);
    }
    cout << ans << endl;

    return 0;
}