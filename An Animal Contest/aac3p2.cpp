#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
#define ll long long
#define pb push_back
#define ull unsigned long long
#define pii pair<int, int>
#define piii pair<pair<int, int>, int>
#define pll pair<ll, ll>
#define psi pair<string, int>
#define mp make_pair
#define vi vector<int>
#define endl '\n'
#define F first
#define S second
#define gp greater<pii>
#define all(x) (x).begin(), (x).end()
#define MM 100005
#define MOD 998244353

int k, d;
vector<int> v;
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    cin >> k >> d;
    for (int i = 0, x; i < d; i++)
    {
        cin >> x;
        v.pb(x);
    }
    sort(all(v));
    if (v[0] == 0)
    {
        if (v.size() == 1)
            cout << -1 << endl;
        else if (k == 1)
            cout << v[1] << endl;
        else
        {
            cout << v[1];
            for (int i = 0; i < k - 2; i++)
                cout << 0;
            cout << v[1] << endl;
        }
    }
    else
    {
        for (int i = 0; i < k; i++)
            cout << v[0];
        cout << endl;
    }
    return 0;
}