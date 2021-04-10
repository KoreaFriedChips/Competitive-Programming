#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
#include <cmath>
#include <queue>
#include <string>
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
        if (a[p.row][p.col] == '+') {
            for (int i = 0; i < 4; i++)
            {
                  int curx = dx[i]+p.row, cury = dy[i]+p.col;
                  if (curx < 0 || cury < 0 || curx >= r || cury >= c || vis[curx][cury] || a[curx][cury] == '*')
                     continue;
                  dis[curx][cury] = dis[p.row][p.col]+1;
                  vis[curx][cury] = true;
                  q.push(mp(curx, cury));
            }
        }
        else if (a[p.row][p.col] == '|') {
           for (int i = 0; i < 2; i++)
            {
               int curx = dx[i]+p.row, cury = p.col;
               if (curx < 0 || cury < 0 || curx >= r || cury >= c || vis[curx][cury] || a[curx][cury] == '*')
                  continue;
               dis[curx][cury] = dis[p.row][p.col]+1;
               vis[curx][cury] = true;
               q.push(mp(curx, cury));
            }
        }
        else if (a[p.row][p.col] == '-') {
           for (int i = 2; i < 4; i++)
            {
               int curx = p.row, cury = dy[i]+p.col;
               if (curx < 0 || cury < 0 || curx >= r || cury >= c || vis[curx][cury] || a[curx][cury] == '*')
                  continue;
               dis[curx][cury] = dis[p.row][p.col]+1;
               vis[curx][cury] = true;
               q.push(mp(curx, cury));
            }
        }
    }

    if (dis[end.row][end.col] == 0)
      return -1;
   else
      return dis[end.row][end.col]+1;
}

int main() 
{
   cin.sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while (t--)
   {
      int r, c; cin >> r >> c;
      for (int i = 0; i < r; i++)
      {
         string x; cin >> x;
         for (int j = 0; j < c; j++)
         {
            char g = x[j];
            a[i][j] = g;
         }
      }
      pii start = mp(0, 0), endpos = mp(r-1, c-1);
      if (r == 1 && c == 1) {
         cout << 1 << endl;
      } else {
         cout << bfs(start, endpos, r, c) << endl;
      }
      
      memset(a, ' ', sizeof(a[0][0]) * MM * MM);
      memset(dis, 0, sizeof(dis[0][0]) * MM * MM);
      memset(vis, 0, sizeof(vis[0][0]) * MM * MM);
   }
   
   return 0;
}