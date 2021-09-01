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
#define MM 10005
#define MOD 1000000007

ll n, d, k, x, p, a[MM];
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> d >> k >> x;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cin >> p;
    for (int i = 0; i < n; i++)
    {
        while (a[i] >= p)
        {
            a[i] = floor(a[i] * ((double)(100 - x) / 100));
            k--;
            if (k < 0)
            {
                cout << "NO" << endl;
                return 0;
            }
        }
    }
    cout << "YES" << endl;
    return 0;
}