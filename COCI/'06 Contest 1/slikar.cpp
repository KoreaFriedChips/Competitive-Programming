#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
#include <cmath>
#include <cstdio>
#include <queue>
#include <cstring>
#include <utility>
using namespace std;

#define ll long long
#define pb push_back
#define ull unsigned long long
#define pii pair<int, int>
#define mp make_pair
#define vi vector<int>
#define endl '\n'
#define MOD 1000000007
#define MM 53

char a[MM][MM];
int dis[MM][MM];
int flood[MM][MM];
queue<pii> q;
int dx[] = {-1, 1, 0, 0}, dy[] = {0, 0, -1, 1};

int main() 
{
   memset(flood, -1, sizeof flood);
   memset(dis, -1, sizeof dis);

   int sx = -1, sy = -1, ex = -1, ey = -1, r, c;
   scanf( "%d%d", &r, &c);
   for (int i =0; i <r; i++) {
      scanf("%s", a[i]);
   }

   for (int i = 0; i < r; i++) {
      for (int j = 0; j < c; j++) {
         if (a[i][j] == 'S') {
            sx = i; sy = j;
         }
         else if (a[i][j] == 'D') {
            ex = i; ey = j;
         }
         else if (a[i][j] == '*') {
            flood[i][j] = 0;
            q.push(mp(i, j));
         }
         else if (a[i][j] == '.') {
            bool flag = false;
            for (int k = 0; k < 4; k++)
            {
               int curx = i+dx[k], cury = j+dy[k];
               if (curx < 0 || cury < 0 || curx >= r || cury >= c)
                  continue;
               if (a[curx][cury] == '*')
                  flag = true;
            }
            if (flag) {
               q.push(mp(i, j));
               flood[i][j] = 1;
            }
         }
      }
   }

   //flood dis
  while ( !q.empty() ) {
      int x = q.front().first;
      int y = q.front().second;
      q.pop();
      for ( int k=0; k<4; ++k ) {
         int curx = x + dx[k];
         int cury = y + dy[k];
         if ( curx < 0 || curx >= r || cury < 0 || cury >= c ) continue;
         if ( flood[curx][cury] == -1 && a[curx][cury] != 'X' && a[curx][cury] != 'D' ) {
            flood[curx][cury] = flood[x][y] + 1;
            q.push( make_pair( curx, cury ) );
         }
      }
   }
   
   //beaver
   dis[sx][sy] = 0;
   q.push(mp(sx, sy));
   while (!q.empty()) {
      int x = q.front().first;
      int y = q.front().second;
      q.pop();
      for ( int k = 0; k < 4; ++k ) {
         int curx = x + dx[k];
         int cury = y + dy[k];
         if ( curx < 0 || curx >= r || cury < 0 || cury >= c ) continue;
         if ( dis[curx][cury] == -1 && a[curx][cury] != 'X' )
            if ( flood[curx][cury] > dis[x][y] + 1 || flood[curx][cury] == -1 ) {
               dis[curx][cury] = dis[x][y] + 1;
               q.push(make_pair(curx, cury));
            }
      }
   }

   if (dis[ex][ey] != -1) {
      printf( "%d\n", dis[ex][ey]);
   } else {
      printf( "KAKTUS\n");
   }
   return 0;
}