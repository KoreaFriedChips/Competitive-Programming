#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstring>
#include <climits>
#include <stack>
#include <queue>
using namespace std;
#define ll long long
#define pb push_back
#define ull unsigned long long
#define pii pair<int, int>
#define pis pair<int, string>
#define mp make_pair
#define vi vector<int>
#define vs vector<string>
#define endl '\n'
#define F first
#define S second
#define MM 11
#define MOD 1000000007

ll gcd(ll a, ll b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    ll n, g;
    cin >> n >> g;
    for (int i = 1; i < n; i++)
    {
        ll x;
        cin >> x;
        g = gcd(g, x);
    }
    ll y = sqrt(g), ans = 0;
    for (ll i = 2; i <= y; i++)
    {
        if (g % i == 0)
            ans = i;
        while (g % i == 0)
            g /= i;
    }
    if (g != 1)
        ans = g;
    if (ans == 0)
        cout << "DNE" << endl;
    else
        cout << ans << endl;
    return 0;
}