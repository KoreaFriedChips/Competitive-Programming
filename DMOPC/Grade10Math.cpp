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
#define MM 1000005
#define MOD 1000000007

int a, b, cnt[MM], ans = INT_MAX;
vector<int> v;
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    cin >> a >> b;
    for (int i = 2; i * i < a; i++)
    {
        if (a % i == 0)
            v.pb(i);
        while (a % i == 0)
        {
            a /= i;
            cnt[i]++;
        }
    }
    if (a != 1)
    {
        v.pb(a);
        cnt[a]++;
    }
    for (int i : v)
    {
        int o = 0, l = i;
        while (b / l != 0)
        {
            o += b / l;
            l *= i;
        }
        int temp = o / cnt[i];
        ans = min(ans, temp);
    }
    cout << ans << endl;
    return 0;
}