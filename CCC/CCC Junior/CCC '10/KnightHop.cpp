#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <set>
#include <iomanip>
#include <queue>
using namespace std;

#define ll long long
#define pb push_back
#define ull unsigned long long
#define pii pair<int, int>
#define mp make_pair
#define row first
#define col second

int dis[9][9]; //keep track of amount of moves to each point
bool visit[9][9]; //keep track of which squares visited
queue<int> q; //queue every single move
int moves[][2] = {{1,2},{1,-2},{-1,2},{-1,-2},{2,-1},{2,1},{-2,1},{-2,-1}}; //all possible moves

void move(int x, int y, int s) //pushes every move into the queue
{
   if (x < 1 || y < 1 || x >= 9 || y >= 9 || visit[x][y])
      return;
   visit[x][y] = true;
   dis[x][y] = s;
   q.push(x);
   q.push(y);
}

int main() 
{
   int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
   q.push(x1); q.push(y1); //push the start
   dis[x1][y1] = 0; //distance from start to start = 0
   visit[x1][y1] = true; //visited start
   while (visit[x2][y2] == false) //keep moving until visit the target
   {
      int curx = q.front(); q.pop(); //set current pos
      int cury = q.front(); q.pop();
      for (int i = 0; i < 8; i++) { //for loop uses every single move
         move(curx+moves[i][0], cury+moves[i][1], dis[curx][cury]+1); //takes one more step to get to the next pos
      }
   }
   cout << dis[x2][y2] << endl;
   return 0;
}