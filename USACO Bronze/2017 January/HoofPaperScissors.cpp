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
#define MM 1000

int ans = 0, n;
pii r[103];
void solve(int a, int b, int c)
{
    int game[4][4], count = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            game[i][j] = 0;
        }
    }
    game[a][b] = 1;
    game[b][c] = 1;
    game[c][a] = 1;
    for (int i = 0; i < n; i++)
    {
        if (game[r[i].first][r[i].second])
            count++;
    }
    ans = max(ans, count);
}

int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    freopen("hps.in", "r", stdin);
    freopen("hps.out", "w", stdout);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        r[i] = mp(x, y);
    }
    solve(1, 2, 3);
    solve(1, 3, 2);
    solve(2, 1, 3);
    solve(2, 3, 1);
    solve(3, 1, 2);
    solve(3, 2, 1);
    cout << ans << endl;
    return 0;
}
