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
#define all(x) x.begin(), x.end()
#define gp greater<pii>
#define MM 1000005
#define MOD 1000000007

// idea: recursion combinations
// https://dmoj.ca/problem/dwite07c1p4

int h, s, x, ans = INT_MAX;
vi v, comb;
void fun(int id, vi comb)
{
    if (id > s)
    {
        int sum = 0;
        for (int i : comb)
            sum += i;
        if (sum == h)
            ans = min(ans, (int)comb.size());
        return;
    }
    fun(id + 1, comb); //don't choose
    comb.pb(v[id]);    //choose
    fun(id + 1, comb);
    comb.pop_back();
}
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    cin >> h >> s;
    for (int i = 0; i < s; i++)
    {
        cin >> x;
        v.pb(x);
    }
    fun(0, comb);
    if (ans == INT_MAX)
        cout << 0 << endl;
    else
        cout << ans << endl;

    return 0;
}