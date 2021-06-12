#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstring>
#include <climits>
#include <stack>
#include <queue>
using namespace std;
#define ll long long
#define pb push_back
#define ull unsigned long long
#define pii pair<int, int>
#define pis pair<int, string>
#define mp make_pair
#define vi vector<int>
#define vs vector<string>
#define endl '\n'
#define F first
#define S second
#define MM 200005
#define MOD 1000000007

vi adj[MM];
bool vis[MM];
void dfs(int x)
{
    vis[x] = true;
    for (int i : adj[x])
    {
        if (!vis[i])
            dfs(i);
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
        adj[b].pb(a);
    }
    int c = 0;
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            c++;
            dfs(i);
        }
    }
    if (m == n - c || m == n - c + 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}