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

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

ll x, a;
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    cin >> x;
    for (int i = 1; i <= sqrt(x); i++)
    {
        if (x % i == 0)
        {
            if (gcd(i, x / i) == 1)
                a = i;
        }
    }
    if (a != 0)
        cout << a << " " << x / a << endl;
    else
        cout << 1 << " " << x << endl;
    return 0;
}