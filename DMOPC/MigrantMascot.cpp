#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
#include <climits>
#include <set>
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
#define MM 200003
#define MOD 1000000007

ll n, m;
vector<pii> v[MM];
int dis[MM];
bool vis[MM];
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    int ans = 0;
    for (int i = 0; i < m; i++)
    {
        ll x, y, w;
        cin >> x >> y >> w;
        v[x].pb(mp(y, w));
        v[y].pb(mp(x, w));
    }
    queue<int> q;
    q.push(1);
    dis[1] = INT_MAX;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        vis[u] = false;
        for (pii p : v[u])
        {
            //cout << p.F << " " << p.S << endl;
            if (min(dis[u], p.S) > dis[p.F])
            {
                dis[p.F] = min(dis[u], p.S);
                if (!vis[p.F])
                {
                    vis[p.F] = true;
                    q.push(p.F);
                }
            }
        }
    }
    dis[1] = 0;
    for (int i = 1; i <= n; i++)
    {
        cout << dis[i] << endl;
    }
    return 0;
}