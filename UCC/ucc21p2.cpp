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
#define MM 1000005
#define MOD 1000000

int n, x, ans = 0, sum = 0;
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x % 2 == 0)
            sum += x;
        else
        {
            ans = max(ans, sum);
            sum = 0;
        }
    }
    ans = max(ans, sum);
    cout << ans << endl;

    return 0;
}
