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

int t, a;
set<double> s;
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    for (int i = 3; i <= 360; i++)
    {
        double x = 180 * (i - 2) / (double)i;
        s.insert(x);
    }
    cin >> t;
    while (t--)
    {
        cin >> a;
        if (s.count(a) != 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}