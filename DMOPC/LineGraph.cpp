#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
#include <climits>
#include <map>
#include <stack>
using namespace std;
#define ll long long
#define pb push_back
#define ull unsigned long long
#define pii pair<int, int>
#define piii pair<int, pii>
#define pis pair<int, string>
#define mp make_pair
#define vi vector<int>
#define vs vector<string>
#define endl '\n'
#define F first
#define S second
#define MM 100003
#define MOD 1000000007

struct e
{
    int u, v, w;
    e(int u, int v, int w) : u(u), v(v), w(w){};
};

ll n, m;
vector<e> edge;
ll dset[100005];

ll find(ll i)
{
    if (dset[i] < 0)
        return i;

    dset[i] = find(dset[i]);
    return dset[i];
}

void merge(ll u, ll v)
{
    if (dset[v] < dset[u])
    {
        swap(u, v);
    }
    dset[u] += dset[v];
    dset[v] = u;
}
bool comp(e a, e b)
{
    return a.w < b.w;
}
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    fill(begin(dset), end(dset), -1);
    cin >> n >> m;
    ull ans = 0;
    for (int i = 0; i < n - 1; i++)
    {
        ll x;
        cin >> x;
        edge.pb(e(i, i + 1, x));
    }
    for (int i = 0; i < n - m; i++)
    {
        edge.pb(e(i, i + m, 0));
    }
    sort(edge.begin(), edge.end(), comp);
    for (e p : edge)
    {
        ll x = find(p.v), y = find(p.u);
        if (x == y)
            continue;
        merge(x, y);
        ans += p.w;
    }
    cout << ans << endl;
}