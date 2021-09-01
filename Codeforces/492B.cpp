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

int n, l;
vector<int> v;
double ans;
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> l;
    for (int i = 0, x; i < n; i++)
    {
        cin >> x;
        v.pb(x);
    }
    sort(all(v));
    for (int i = 0; i < v.size() - 1; i++)
        ans = max(ans, (double)(v[i + 1] - v[i]) / 2);
    ans = max(ans, (double)v[0]);
    ans = max(ans, (double)(l - v[v.size() - 1]));
    cout << fixed << setprecision(9) << ans << endl;

    return 0;
}