#include <bits/stdc++.h>
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
#define MM 1005
#define MOD 1000000013

int n;
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    string a, b;
    cin >> a >> b;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == '0' && b[i] == '0')
            ans++;
    }
    cout << ans << endl;

    return 0;
}