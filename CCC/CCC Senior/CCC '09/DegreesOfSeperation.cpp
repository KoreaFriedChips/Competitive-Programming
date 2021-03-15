#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <climits>
#include <cmath>
#include <string>
using namespace std;

#define ll long long
#define pb push_back
#define ull unsigned long long

int FofF(int g[][50], int x) {
    int q[50][50], count = 0; //copy graph 
    for (int i = 0; i < 50; i++)
        for (int j = 0; j < 50; j++)
            q[i][j] = g[i][j];
    for (int i = 0; i < 50; i++) //loop through every node bounded by x
    {
        if (q[x][i] == 1) { //if it has a friend
            for (int j = 0; j < 50; j++)
            {
                if (q[i][j] == 1 && j != x && q[x][j] == 0) //check how many direct friends it has 
                    q[x][j] = 2; //set it to 2 for later
            }
        }
    }
    for (int i = 0; i < 50; i++)
    {
        if (q[x][i] == 2) {
            count++; //count it up
        }
    }
    return count;
}

int shortPath(int g[][50], int x, int y) {
    int q[50][50];
    for (int i = 0; i < 50; i++)
        for (int j = 0; j < 50; j++)
            if (g[i][j] == 1) { //copy all connected paths
                q[i][j] = g[i][j];
            } else {
                q[i][j] = 999; //give non connected nodes value of 999
            }
    for (int i = 0; i < 50; i++) //triple nested for loop to look through every connection
        for (int j = 0; j < 50; j++)
            if (q[i][j] > 0) {
                for (int k = 0; k < 50; k++)
                    if ((q[j][k] > 0) && q[i][j] + q[j][k] < q[i][k]) { 
                        q[i][k] = q[i][j] + q[j][k];
                        q[k][i] = q[i][j] + q[j][k];
                    }
            }
    return q[x][y];       
}

int main() 
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    int g[50][50];
	for (int i = 0 ; i < 50 ; i++)
	    for (int j = 0 ; j < 50 ; j++)
		g [i] [j] = 0;
    
	g [1] [6] = 1;
	g [6] [1] = 1;
	g [2] [6] = 1;
	g [6] [2] = 1;
	g [3] [6] = 1;
	g [6] [3] = 1;
	g [4] [6] = 1;
	g [6] [4] = 1;
	g [5] [6] = 1;
	g [6] [5] = 1;
	g [7] [6] = 1;
	g [6] [7] = 1;
	g [3] [4] = 1;
	g [4] [3] = 1;
	g [4] [5] = 1;
	g [5] [4] = 1;
	g [3] [5] = 1;
	g [5] [3] = 1;
	g [3] [15] = 1;
	g [15] [3] = 1;
	g [13] [15] = 1;
	g [15] [13] = 1;
	g [14] [13] = 1;
	g [13] [14] = 1;
	g [12] [13] = 1;
	g [13] [12] = 1;
	g [7] [8] = 1;
	g [8] [7] = 1;
	g [8] [9] = 1;
	g [9] [8] = 1;
	g [9] [10] = 1;
	g [10] [9] = 1;
	g [9] [12] = 1;
	g [12] [9] = 1;
	g [10] [11] = 1;
	g [11] [10] = 1;
	g [11] [12] = 1;
	g [12] [11] = 1;
	g [16] [17] = 1;
	g [17] [16] = 1;
	g [16] [18] = 1;
	g [18] [16] = 1;
	g [18] [17] = 1;
	g [17] [18] = 1;

    char x;
    int a, b;
    while (cin >> x)
    {
        if (x == 'q') break;
        else if (x == 'i') { //connect the 2 nodes together
            cin >> a >> b;
            g[a][b] = 1;
            g[b][a] = 1;
        }
        else if (x == 'd') { //remove the 2 nodes connection
            cin >> a >> b;
            g[a][b] = 0;
            g[b][a] = 0;
        }
        else if (x == 'n') { //loop through all nodes bounded by a, and count
            cin >> a;
            int count = 0;
            for (int i = 0; i < 50; i++)
            {
                if (g[a][i] == 1) {
                    count ++;
                }
            }
            cout << count << '\n';
        }
        else if (x == 'f') {
            cin >> a;
            cout << FofF(g, a) << '\n';
        }
        else if (x == 's') {
            cin >> a >> b;
            if (shortPath(g, a, b) == 999) {
                cout << "Not connected" << '\n';
            } else {
                cout << shortPath(g, a, b) << '\n';
            }
        }
    }

    return 0;
}