#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
#include <cmath>
#include <queue>
#include <string>
#include <set>
using namespace std;

#define ll long long
#define pb push_back
#define ull unsigned long long
#define pii pair<int, int>
#define mp make_pair
#define vi vector<int>
#define endl '\n'
#define INF 0x3f3f3f3f
#define MM 1003
#define row first
#define col second

char a[MM][MM];
int vis[MM][MM];
bool teleporter[MM][MM];
int dx[] = {-1, 1, 0, 0}, dy[] = {0, 0, -1, 1};

int main()
{
    int r, c; cin >> r >> c;
    int sx, sy, ex, ey; cin >> sx >> sy >> ex >> ey;
    for (int i = 0; i < r; i++)
    {
        cin >> a[i];
    }
    int t; cin >> t;
    vector<pii> tele;
    for (int i = 0; i < t; i++)
    {
        int a, b; cin >> a >> b;
        tele.pb(mp(a, b));
        teleporter[a][b] = 1;
    }
    memset(vis, 63, sizeof vis);
    queue<pii> q;
    vis[sx][sy] = 0;
    q.push(mp(sx, sy));
    pii curr;
    int cx, cy;
    while (!q.empty()) {
        curr = q.front(); q.pop();
        if (curr.row == ex && curr.col == ey)
            break;
        if (teleporter[curr.row][curr.col])
            continue;
        for (int i =0; i < 4; i++) {
            cx = curr.row+dx[i]; cy = curr.col+dy[i];
            if (cx < 0 || cy < 0 || cx >= r || cy >= c || a[cx][cy] == 'X')
                continue;
            if (vis[cx][cy] <= vis[curr.row][curr.col])
                continue;
            vis[cx][cy] = vis[curr.row][curr.col]+1;
            q.push(mp(cx, cy));
        }
    }
    int ans = INF, mx, my;
    for (int i = 0; i < t; i++) {
        curr = tele[i];
        if (ans > vis[curr.row][curr.col]) {
            ans = vis[curr.row][curr.col];
            mx = curr.row; my = curr.col;
        }
    }
    if (vis[ex][ey] == INF) {
        while (!q.empty())
            q.pop();
        q.push(mp(mx, my));
        while (!q.empty()) {
            curr = q.front(); q.pop();
            if (curr.row == ex && curr.col == ey) 
                break;
            for (int i = 0; i < 4; i++) {
                cx = curr.row+dx[i]; cy = curr.col+dy[i];
                if (cx < 0 || cy < 0 || cx >= r || cy >= c || a[cx][cy] == 'X')
                    continue;
                if (vis[cx][cy] <= vis[curr.row][curr.col])
                    continue;
                vis[cx][cy] = vis[curr.row][curr.col]+1;
                q.push(mp(cx, cy));
            }
        }
    }
    if (vis[ex][ey]-ans < 0)
        cout << 0 << endl;
    else 
        cout << vis[ex][ey]-ans << endl;
    return 0;
}