#include <bits/stdc++.h>
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
#define MM 1000005
#define MOD 1000000

int n, x, y, m, l, r;
ll ans = 0;
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> x >> y >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> l >> r;
        if (r >= y && l <= x)
        {
            ans += y - x + 1;
        }
        else if (l >= x && l <= y && r >= y)
        {
            ans += y - l + 1;
        }
        else if (r <= y && r >= x && l <= x)
        {
            ans += r - x + 1;
        }
        else if (r <= y && l >= x)
        {
            ans += r - l + 1;
        }
    }
    cout << ans << endl;
    return 0;
}