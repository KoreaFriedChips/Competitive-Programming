#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
#include <iomanip>
#include <queue>
#include <climits>
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
#define MM 100003

int f[MM];
bool vis[MM];
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        f[a] = b;
    }
    int x, y;
    while (cin >> x >> y)
    {
        if (x == 0 && y == 0)
            break;
        memset(vis, 0, sizeof(vis));
        int dis = 0;
        while (x ^ y && !vis[x])
        {
            vis[x] = true;
            x = f[x];
            dis++;
        }
        if (x == y)
            cout << "Yes " << dis - 1 << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}