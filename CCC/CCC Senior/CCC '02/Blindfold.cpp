#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <set>
#include <iomanip>
#include <set>
using namespace std;

#define ll long long
#define pb push_back
#define ull unsigned long long
#define pii pair<int, int>
#define mp make_pair
#define endl '\n'
#define row first
#define col second

int r, c, m, dir[4][2]={{-1,0}, {0,1}, {1,0}, {0,-1}}; //create a way to try every single direction
char yard[376][81], instruct[30001];

void check(int y, int x)
{
    for(int d=0; d<4; d++)
    {
        int step=1, tmpy=y, tmpx=x, tmpd=d, newy, newx; //hold the current position
        while(step<=m)
        {
            newy = tmpy+dir[tmpd][0]; newx = tmpx+dir[tmpd][1]; //set new position
            if(instruct[step]=='F')
                if(newy>=1 && newy<=r && newx>=1 && newx<=c && yard[newy][newx]!='X'){ //conditions that need to be met in order to move
                   tmpy = newy; tmpx = newx;
                }
                else break;
            else if (instruct[step]=='R')
                tmpd = (tmpd+1)%4;
            else if (instruct[step]=='L')
                tmpd = (tmpd-1+4)%4;
            step++;
        }
        if(step>m) yard[tmpy][tmpx] = '*'; //after the loop add * to whereever u end
    }
}

int main() 
{
    cin >> r >> c;
    for(int i=1; i<=r; i++)
        for(int j=1; j<=c; j++)
            cin >> yard[i][j];
    cin >> m;
    for(int i=1; i<=m; i++)
        cin >> instruct[i];
    for(int i=1; i<=r; i++)
        for(int j=1; j<=c; j++)
            if(yard[i][j]!='X')
                check(i, j);
    for(int i=1; i<=r; cout<<endl, i++)
        for(int j=1; j<=c; j++)
            cout << yard[i][j];

   return 0;
}