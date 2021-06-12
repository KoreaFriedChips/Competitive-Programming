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
#define MM 100005
#define MOD 1000000013

// idea: only add points if upperbound(end) == lowerbound(start) because that means they're both not in bounds

int n,
    k, ans = 0;
vi l, r, pts, fail;
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    l.resize(n), r.resize(n), pts.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> l[i] >> r[i] >> pts[i];
    }
    cin >> k;
    fail.resize(k);
    for (int i = 0; i < k; i++)
    {
        cin >> fail[i];
    }
    sort(fail.begin(), fail.end());
    for (int i = 0; i < n; i++)
    {
        int P = lower_bound(fail.begin(), fail.end(), l[i]) - fail.begin();
        int Q = upper_bound(fail.begin(), fail.end(), r[i]) - fail.begin();
        if (P == Q)
            ans += pts[i];
    }
    cout << ans << endl;

    return 0;
}