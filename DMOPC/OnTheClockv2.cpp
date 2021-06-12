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
#define MM 10005
#define MOD 1000000007

int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}

// for each y value the range of x values it passes through is...
// left = floor ((y-1)* m/n) right = ceil(y*m/n)

int n, m;
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    cout << n + m - gcd(n, m) << endl;
    for (int i = 1; i <= n; i++)
    {
        int left = (ll)(i - 1) * m / n + 1, right = ((ll)i * m + n - 1) / n;
        for (int j = left; j <= right; j++)
        {
            cout << i << ' ' << j << endl;
        }
    }

    return 0;
}