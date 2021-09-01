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

ll s, n, x, y;
pii a[MM];
bool flag = false;
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    cin >> s >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        a[i] = mp(x, y);
    }
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        if (s > a[i].F)
            s += a[i].S;
        else
        {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
    return 0;
}