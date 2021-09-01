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

int n, m, a, b, ans;
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m >> a >> b;
    if (b < m * a)
    {
        while (n - m > 0)
        {
            ans += b;
            n -= m;
        }
        ans += min(n * a, b);
    }
    else
        ans = n * a;

    cout << ans << endl;

    return 0;
}