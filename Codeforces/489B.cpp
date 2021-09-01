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
#define MM 1005
#define MOD 998244353

int n, m, ans;
vector<int> b, g;
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 0, x; i < n; i++)
    {
        cin >> x;
        b.pb(x);
    }
    cin >> m;
    for (int i = 0, x; i < m; i++)
    {
        cin >> x;
        g.pb(x);
    }
    sort(all(b));
    sort(all(g));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (abs(b[i] - g[j]) <= 1)
            {
                ans++;
                g[j] = INT_MAX;
                break;
            }
        }
    }
    cout << ans << endl;

    return 0;
}