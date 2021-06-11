//1122126d2a39
#include <bits/stdc++.h>
#include <unordered_map>
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
#define all(x) x.begin(), x.end()
#define gp greater<pii>
#define MM 100005
#define MOD 998244353

ll n, x, a[MM], ans;
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> x;
    priority_queue<int> q;
    for (int i = 0, t; i < n; i++)
    {
        cin >> t;
        q.push(t);
    }
    while (x--)
    {
        int m = q.top();
        q.pop();
        ans += m;
        if (m > 0)
            q.push(m - 1);
    }
    cout << ans << endl;

    return 0;
}