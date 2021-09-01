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

int n, x, a[MM];
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> x;
    if ((n - x) % 2 == 1)
    {
        cout << -1 << endl;
        return 0;
    }
    for (int i = 0; i < n - x; i += 2)
        a[i] = 1;
    for (int i = 0; i < n; i++)
    {
        if (i > 0)
            cout << " ";
        cout << a[i];
    }
    cout << endl;
    return 0;
}