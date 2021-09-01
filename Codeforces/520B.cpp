#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
#define ll long long
#define pb push_back
#define ull unsigned long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pic pair<int, char>
#define mp make_pair
#define vi vector<int>
#define endl '\n'
#define F first
#define S second
#define gp greater<pii>
#define all(x) (x).begin(), (x).end()
#define MM 10005
#define MOD 998244353

int n, m, dis[MM];
int bfs()
{
    memset(dis, -1, sizeof(dis));
    queue<int> q;
    q.push(n);
    dis[n] = 0;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        if (1 <= u - 1 && u - 1 <= MM && dis[u - 1] == -1)
        {
            dis[u - 1] = dis[u] + 1;
            q.push(u - 1);
        }
        if (1 <= u * 2 && u * 2 <= MM && dis[u * 2] == -1)
        {
            dis[u * 2] = dis[u] + 1;
            q.push(u * 2);
        }
    }
    return dis[m];
}

int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    cout << bfs() << endl;
    return 0;
}