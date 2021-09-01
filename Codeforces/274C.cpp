#include <bits/stdc++.h>
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
#define MM 100005
#define MOD 998244353

int n, x, y, ans;
vector<pii> v;
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        v.pb(mp(x, y));
    }
    sort(all(v));
    for (int i = 0; i < n; i++)
    {
        if (ans <= v[i].S)
            ans = v[i].S;
        else
            ans = v[i].F;
    }
    cout << ans << endl;
    return 0;
}