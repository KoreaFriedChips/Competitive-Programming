#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <climits>
#include <cmath>
#include <string>
using namespace std;

#define ll long long
#define pb push_back
#define ull unsigned long long

bool visited[1005][1005];
int main() 
{ 
    cin.sync_with_stdio(0);
    cin.tie(0);
    int n, m; cin >> n >> m;
    int mine[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mine[i][j];
        }
    }
    int posx, posy; cin >> posx >> posy;

    int total = mine[0][0];
    visited[0][0] = true;
    while (posx != 0 && posy != 0)
    {
        if (mine[posx-1][posy] < mine[posx][posy+1] && mine[posx-1][posy] < mine[posx][posy-1]) {
            if (visited[posx-1][posy] == false) {
                visited[posx-1][posy] = true;
                total += mine[posx-1][posy];
                cout << mine[posx-1][posy] << endl;
                posx--;
            }
        }
        else if (mine[posx][posy+1] < mine[posx+1][posy] && mine[posx][posy+1] < mine[posx][posy-1]) {
            if (visited[posx][posy+1] == false) {
                visited[posx][posy+1] = true;
                total += mine[posx][posy+1];
                cout << mine[posx][posy+1] << endl;
                posy++;
            }
        }
        else if (mine[posx][posy-1] < mine[posx][posy+1] && mine[posx][posy-1] < mine[posx+1][posy]) {
            if (visited[posx][posy-1] == false) {
                visited[posx][posy-1] = true;
                total += mine[posx-1][posy];
                cout << mine[posx-1][posy] << endl;
                posy--;
            }
        }
    }

    cout << total << endl;
    
    return 0; 
} 
