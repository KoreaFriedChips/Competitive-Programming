#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define ull unsigned long long
#define pii pair<int, int>
#define mp make_pair
#define vi vector<int>
#define endl '\n'
#define MOD 1000000007
#define row first
#define col second

const int MM = 53;

int dx[] = {-1, 1, 0, 0}, dy[] = {0, 0, -1, 1};
char a[MM][MM];
queue<pii> q;
int dis[MM][MM];
bool vis[MM][MM];

int bfs(pii start, pii end, int r, int c)
{
   vis[start.row][start.col] = true;
   q.push(start);
   while (!q.empty())
   {
      pii p = q.front();
      q.pop();
      for (int i = 0; i < 4; i++)
      {
         int curx = dx[i] + p.row, cury = dy[i] + p.col;
         if (curx < 0 || cury < 0 || curx >= r || cury >= c || vis[curx][cury] || a[curx][cury] == 'X')
            continue;
         dis[curx][cury] = dis[p.row][p.col] + 1;
         vis[curx][cury] = true;
         q.push(mp(curx, cury));
      }
   }

   if (dis[end.row][end.col] == 0)
      return 6000;
   else
      return dis[end.row][end.col];
}

pii start, endpos;
int main()
{
   cin.sync_with_stdio(0);
   cin.tie(0);
   int t;
   cin >> t;
   while (t--)
   {
      int l, w;
      cin >> l >> w;
      for (int i = 0; i < w; i++)
      {
         string x;
         cin >> x;
         for (int j = 0; j < l; j++)
         {
            char g = x[j];
            if (g == 'C')
            {
               start = mp(i, j);
            }
            if (g == 'W')
               endpos = mp(i, j);
            a[i][j] = g;
         }
      }
      int ans = bfs(start, endpos, w, l);
      if (ans >= 60)
         cout << "#notworth" << endl;
      else
         cout << ans << endl;

      memset(a, ' ', sizeof(a[0][0]) * MM * MM);
      memset(dis, 0, sizeof(dis[0][0]) * MM * MM);
      memset(vis, 0, sizeof(vis[0][0]) * MM * MM);
   }

   return 0;
}

/*for (int i = 0; i < r; i++)
    // {
    //     for (int j = 0; j < c; j++)
    //     {
    //         cout << a[i][j];
    //     }
    //     cout << endl;
    // }*/
// for (piiii i : s)
// {
//     cout << i.F.F << " " << i.F.S << " " << i.S.F << " " << i.S.S << endl;
// }