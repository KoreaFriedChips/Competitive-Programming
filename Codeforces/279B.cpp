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
#define MM 100005
#define MOD 998244353

int n, t, psa[MM], ans;
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> t;
    for (int i = 1, x; i <= n; i++)
    {
        cin >> x;
        psa[i] = psa[i - 1] + x;
    }
    for (int l = 1, r = 1; r <= n; r++)
    {
        if (psa[r] - psa[l - 1] <= t)
            ans = max(ans, r - l + 1);
        else
            l++;
    }
    cout << ans << endl;
    return 0;
}