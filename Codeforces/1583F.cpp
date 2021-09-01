#include <bits/stdc++.h>
#include <unordered_set>
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
#define MM 200005
#define MOD 1000000013

ll t, l, r;
int main()
{
    cin >> t;
    while (t--)
    {
        ll ans = 0;
        cin >> l >> r;
        while (l || r)
        {
            ans += r - l;
            r /= 10;
            l /= 10;
        }
        cout << ans << endl;
    }

    return 0;
}