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

int n, a[30], ans, cnt_even, cnt_odd;
string s;
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> s;
    for (int i = 0; i < n; i++)
    {
        a[s[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (a[i] == 0)
            continue;
        if (a[i] % 2 == 0)
            cnt_even++;
        else
            cnt_odd++;
    }

    ans++;
    if (cnt_odd > 0)
        ans += cnt_odd - 1;

    cout << ans << endl;

    return 0;
}