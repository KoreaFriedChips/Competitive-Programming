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

int n, s, ans;
unordered_map<int, int> m;
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        m[s]++;
    }
    int x = min(m[1], m[3]);
    ans += m[4];
    ans += x;
    m[1] -= x;
    m[3] -= x;
    ans += m[3];
    ans += m[2] / 2;
    m[2] -= m[2] / 2 * 2;
    if (m[2] == 1)
    {
        ans++;
        m[1] -= 2;
    }
    if (m[1] > 0)
        ans += ceil((double)m[1] / 4);
    cout << ans << endl;

    return 0;
}