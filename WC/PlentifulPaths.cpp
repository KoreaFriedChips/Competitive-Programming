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
#define MM 105
#define MOD 1000000013

int n, m, x, y, dx[] = {0, 1}, dy[] = {1, 0};
int a[MM][MM], dis[MM][MM], vis[MM][MM];
int bfs()
{
    queue<pii> q;
    q.push(mp(1, 1));
    dis[1][1] = a[1][1];
    while (!q.empty())
    {
        int r = q.front().F, c = q.front().S;
        q.pop();
        if (r + 1 <= m && dis[r][c] + a[r + 1][c] > dis[r + 1][c])
        {
            dis[r + 1][c] = dis[r][c] + a[r + 1][c];
            q.push(mp(r + 1, c));
        }
        if (c + 1 <= n && dis[r][c] + a[r][c + 1] > dis[r][c + 1])
        {
            dis[r][c + 1] = dis[r][c] + a[r][c + 1];
            q.push(mp(r, c + 1));
        }
    }
    return dis[m][n];
}
int main()
{
    cin >> n >> m;
    while (cin >> x >> y)
    {
        if (x == 0 && y == 0)
            break;
        a[x][y] = 1;
    }
    cout << bfs() << endl;

    return 0;
}