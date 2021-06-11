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
#define MM 10005
#define MOD 1000000013

// idea: set up non-bidirectorial graph, dfs from every edge, ans++ if meets requirements
struct e
{
    int u, v, w;
    e(int u, int v, int w) : u(u), v(v), w(w){};
};

vector<e> edges;
vector<pii> adj[MM];
int N, C, K, c, a, b, k, ans = 0, curC = 0, curW = 0;
int cherry[MM];

void dfs(int x)
{
    curC += cherry[x];
    for (pii edge : adj[x])
    {
        curW += edge.S;
        dfs(edge.F);
    }
}
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> N >> C >> K;
    for (int i = 1; i <= N; i++)
    {
        cin >> cherry[i];
    }
    for (int i = 0; i < N - 1; i++)
    {
        cin >> a >> b >> k;
        if (a > b)
            swap(a, b);
        adj[a].pb(mp(b, k));
        edges.pb(e(a, b, k));
    }
    for (int i = 0; i < N - 1; i++)
    {
        curW = edges[i].w;
        dfs(edges[i].v);
        if (curW <= K && curC >= C)
            ans++;
        curW = 0;
        curC = 0;
    }
    cout << ans << endl;

    return 0;
}