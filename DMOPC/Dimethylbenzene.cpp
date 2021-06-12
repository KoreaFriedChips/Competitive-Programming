#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
#include <climits>
#include <stack>
#include <queue>
using namespace std;
#define ll long long
#define pb push_back
#define ull unsigned long long
#define pii pair<int, int>
#define piii pair<int, pii>
#define pis pair<int, string>
#define mp make_pair
#define vi vector<int>
#define vs vector<string>
#define endl '\n'
#define F first
#define S second
#define MM 10003
#define MOD 1000000007

vi adj[MM];
int dis[MM], ans = 0;
bool vis[MM];

void dfs(int x)
{
    for (int v : adj[x])
    {
        if (!vis[v])
        {
            vis[v] = true;
            dis[v] = dis[x] + 1;
            dfs(v);
        }
        else
            ans = max(ans, abs(dis[x] - dis[v]) + 1);
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
        int a, b;
        cin >> a >> b;
        adj[a].pb(b);
    }
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            vis[i] = true;
            dfs(i);
        }
    }
    cout << ((ans >= 6) ? "YES" : "NO") << endl;

    return 0;
}