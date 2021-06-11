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
#define MM 500005
#define MOD 1000000007

ll n, q, a, b, sum, psa[MM];
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> q;
    for (int i = 1; i <= n; i++)
    {
        cin >> psa[i];
        sum += psa[i];
        psa[i] += psa[i - 1];
    }
    while (q--)
    {
        cin >> a >> b;
        cout << sum - (psa[b] - psa[a - 1]) << endl;
    }
    return 0;
}