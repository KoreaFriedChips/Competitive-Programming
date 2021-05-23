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
#define MM 1000003
#define MOD 1000000007

int dis[MM];
vi adj[MM];
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    int l, s, p, n;
    cin >> l >> s >> p >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[a].pb(b);
    }
    queue<int> q;
    q.push(s);
    fill(begin(dis), end(dis), MM);
    dis[s] = 0;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (int v : adj[u])
        {
            if (dis[v] > dis[u] + 1)
            {
                dis[v] = dis[u] + 1;
                q.push(v);
            }
        }
    }
    cout << dis[p] << endl;

    return 0;
}