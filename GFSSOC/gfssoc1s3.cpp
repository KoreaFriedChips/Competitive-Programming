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
#define MM 21
#define MOD 1000000013

int n, m, t, dx[] = {-1, 1, 0, 0}, dy[] = {0, 0, -1, 1}, ans = INT_MAX;
char a[MM][MM];
vector<pii> hider;
pii griffy;

int bfs(pii start, pii end)
{
    queue<pii> q;
    bool vis[MM][MM];
    int dis[MM][MM];
    memset(vis, false, sizeof(vis));
    memset(dis, 0, sizeof(dis));
    q.push(start);
    while (!q.empty())
    {
        pii p = q.front();
        q.pop();
        if (p.F == end.F && p.S == end.S)
            break;
        vis[p.F][p.S] = true;
        for (int i = 0; i < 4; i++)
        {
            int nx = p.F + dx[i], ny = p.S + dy[i];
            if (nx < 0 || ny < 0 || nx >= n || ny >= m || vis[nx][ny] || a[nx][ny] == 'X')
                continue;
            q.push(mp(nx, ny));
            dis[nx][ny] = dis[p.F][p.S] + 1;
        }
    }
    return dis[end.F][end.S];
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m >> t;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char c;
            cin >> c;
            if (c == 'H')
                hider.pb(mp(i, j));
            else if (c == 'G')
                griffy = mp(i, j);
            a[i][j] = c;
        }
    }

    do
    {
        int dis = bfs(griffy, hider[0]);
        for (int i = 0; i < t - 1; i++)
        {
            dis += bfs(hider[i], hider[i + 1]);
        }
        ans = min(ans, dis);
    } while (next_permutation(hider.begin(), hider.end()));
    cout << ans << endl;

    return 0;
}