#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
#define ll long long
#define pb push_back
#define ull unsigned long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define mp make_pair
#define vi vector<int>
#define endl '\n'
#define F first
#define S second
#define gp greater<pii>
#define all(x) (x).begin(), (x).end()
#define MM 105
#define MOD 1000000007

// https://dmoj.ca/problem/vmss15c1p2

bool a[MM][MM];
int ans, dx[] = {1, -1, 0, 0}, dy[] = {0, 0, 1, -1}, r, c;
void bfs(int i, int j)
{
    queue<pii> q;
    q.push(mp(i, j));
    a[i][j] = true;
    while (!q.empty())
    {
        pii p = q.front();
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int nx = p.F + dx[i], ny = p.S + dy[i];
            if (nx < 0 || ny < 0 || nx >= r || ny >= c || a[nx][ny])
                continue;
            a[nx][ny] = true;
            q.push(mp(nx, ny));
        }
    }
}
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    cin >> r >> c;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            char ch;
            cin >> ch;
            if (ch == 'X')
                a[i][j] = true;
            else
                a[i][j] = false;
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (!a[i][j])
            {
                bfs(i, j);
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}