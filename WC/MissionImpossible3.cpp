#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define ull unsigned long long
#define endl '\n'
#define pii pair<int, int>
#define pis pair<int, string>
#define vi vector<int>
#define mp make_pair
#define F first
#define S second
#define MM 1503
#define MOD 1000000007

ll gcd(ll a, ll b)
{
    if (a < b)
        swap(a, b);
    while (b != 0)
    {
        ll t = a;
        a = b;
        b = t % b;
    }
    return a;
}

ll n, r, a, b;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    while (n--)
    {
        cin >> r >> a >> b;
        cout << r / a + r / b - r / (a * b / gcd(a, b)) << endl;
    }

    return 0;
}