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
#define gp greater<pii>
#define all(x) (x).begin(), (x).end()
#define MM 100005
#define MOD 1000000007

ll n, q, v, p, c;
vector<ll> money;
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> q;
    money.resize(n);
    for (int i = 0; i < n; i++)
        cin >> money[i];
    for (int i = 0; i < n; i++)
    {
        cin >> v;
        if (v == 0)
            continue;
        money[i] += money[v - 1];
    }
    // for (int i : money)
    //     cout << i << endl;

    for (int i = 0; i < q; i++)
    {
        cin >> p >> c;
        if (p >= c)
        {
            cout << -1 << endl;
            continue;
        }

        for (int i = 0; i < n; i++)
        {
            if (money[i] >= c - p)
            {
                cout << i + 1 << endl;
                break;
            }
        }
    }

    return 0;
}