#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
#include <map>
#include <queue>
using namespace std;

#define ll long long
#define pb push_back
#define ull unsigned long long
#define pii pair<int, int>
#define mp make_pair
#define vi vector<int>
#define endl '\n'
#define F first
#define S second
#define MM 1003

char a[33][33];
int dx[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
int dy[8] = {0, 1, 1, 1, 0, -1, -1, -1};
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < 8; k++)
            {
                if (a[i][j] == '.')
                    continue;
                int r1 = i + dx[k], c1 = j + dy[k];
                int r2 = r1 + dx[k], c2 = c1 + dy[k];
                if (r2 < 0 || c2 < 0 || r2 >= n || c2 >= n)
                    continue;
                if (a[i][j] == a[r1][c1] && a[r1][c1] == a[r2][c2])
                {
                    cout << a[i][j] << endl;
                    return 0;
                }
            }
        }
    }
    cout << "ongoing" << endl;

    return 0;
}