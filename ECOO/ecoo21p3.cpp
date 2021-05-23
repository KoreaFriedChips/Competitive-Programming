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
#define MM 200005
#define MOD 1000000007

int n, m, k, a, b, c;
pii ans[MM]; // F = professor, S = score
int main()
{
    memset(ans, -1, sizeof(ans));
    cin >> n >> m >> k;
    for (int i = 0; i < k; i++)
    {
        cin >> a >> b >> c;
        if (c > ans[b].S)
        {
            ans[b].F = a;
            ans[b].S = c;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cout << ans[i].F << " ";
    }
    cout << endl;
    return 0;
}