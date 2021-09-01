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
#define MM 11
#define MOD 1000000007

int d[8][2] = {{1, 1}, {-1, -1}, {1, -1}, {-1, 1}, {1, 0}, {0, 1}, {-1, 0}, {0, -1}};
char a[MM][MM];
queue<pii> q;
int dis[MM][MM];
bool vis[MM][MM];
int bfs(pii start, pii end)
{
    vis[start.F][start.S] = true;
    q.push(start);
    while (!q.empty())
    {
        pii p = q.front();
        q.pop();
        for (int i = 0; i < 8; i++)
        {
            int curx = d[i][0] + p.F, cury = d[i][1] + p.S;
            if (curx < 0 || cury < 0 || curx >= 8 || cury >= 8 || vis[curx][cury] || a[curx][cury] == '#')
                continue;
            dis[curx][cury] = dis[p.F][p.S] + 1;
            vis[curx][cury] = true;
            q.push(mp(curx, cury));
        }
    }
    return dis[end.F][end.S];
}

pii start, endpos;
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    int t = 5;
    while (t--)
    {
        for (int i = 0; i < 8; i++)
        {
            string x;
            cin >> x;
            for (int j = 0; j < 8; j++)
            {
                char g = x[j];
                if (g == 'A')
                {
                    start = mp(i, j);
                }
                if (g == 'B')
                    endpos = mp(i, j);
                a[i][j] = g;
            }
        }
        cout << bfs(start, endpos) << endl;

        memset(a, ' ', sizeof(a[0][0]) * MM * MM);
        memset(dis, 0, sizeof(dis[0][0]) * MM * MM);
        memset(vis, 0, sizeof(vis[0][0]) * MM * MM);
    }

    return 0;
}