#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
#define ll long long
#define pb push_back
#define ull unsigned long long
#define pii pair<int, int>
#define piii pair<pair<int, int>, int>
#define pll pair<ll, ll>
#define pic pair<int, char>
#define mp make_pair
#define vi vector<int>
#define endl '\n'
#define F first
#define S second
#define gp greater<pii>
#define all(x) (x).begin(), (x).end()
#define MM 200005
#define MOD 1000000007

ll t, n;
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> n;
        ll ans = 0;
        for (int i = 1; i <= 9; i++)
        {
            ll x = i;
            while (x <= n)
            {
                ans++;
                x = x * 10 + i;
            }
        }
        cout << ans << endl;
    }
    return 0;
}