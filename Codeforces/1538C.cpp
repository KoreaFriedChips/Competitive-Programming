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

ll t, n, l, r;
int main()
{
    cin >> t;
    while (t--)
    {
        ll ans = 0;
        cin >> n >> l >> r;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(all(a));
        for (int i = 0; i < n; i++)
        {
            ans += upper_bound(all(a), r - a[i]) - a.begin();
            ans -= lower_bound(all(a), l - a[i]) - a.begin();
            if (l <= 2 * a[i] && r >= 2 * a[i])
                ans--;
        }
        cout << ans / 2 << endl;
    }

    return 0;
}