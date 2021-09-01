#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>
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
#define MM 1000005
#define MOD 1000000007

int n, a[MM];
vector<int> ans;
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        ans.pb(a[i]);
        ans.pb(a[j]);
    }
    if (n % 2 == 1)
        ans.pb(a[n / 2]);
    for (int i = 0; i < n; i++)
    {
        cout << ans[i];
        if (i < n - 1)
            cout << " ";
    }
    cout << endl;
    for (int i = 0; i < n - (n % 2 == 1); i++)
    {
        if (i % 2 == 0)
            cout << "B";
        else
            cout << "S";
    }
    if (n % 2 == 1)
        cout << "E";
    cout << endl;
    return 0;
}