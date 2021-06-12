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
#define MM 200005
#define MOD 1000000007

struct Q
{
    int a, b, q, id;
    Q(int a, int b, int q, int id) : a(a), b(b), q(q), id(id) {}
};
bool cmp(Q a, Q b)
{
    return a.q < b.q;
}
ll n, m, psa[MM], BIT[MM], ans[MM];
vector<pll> trees;
vector<Q> queries;
void update(int x, int val)
{
    while (x <= n)
    {
        BIT[x] += val;
        x += (x & -x);
    }
}

ll query(int x)
{
    ll res = 0;
    while (x > 0)
    {
        res += BIT[x];
        x -= (x & -x);
    }
    return res;
}
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        int h;
        cin >> h;
        trees.pb(mp(h, i));
        psa[i] = psa[i - 1] + h;
    }

    sort(trees.begin(), trees.end());
    for (int i = 0; i < m; i++)
    {
        int a, b, q;
        cin >> a >> b >> q;
        queries.pb(Q(a, b, q, i));
    }
    sort(queries.begin(), queries.end(), cmp);

    int id = 0;
    for (int i = 0; i < m; i++)
    {
        int l = queries[i].a, r = queries[i].b, k = queries[i].q;
        for (int j = id; j < n; j++)
        {
            if (k > trees[j].F)
            {
                update(trees[id].S, trees[id].F);
                id++;
            }
            else
                break;
        }
        ans[queries[i].id] = (psa[r] - psa[l - 1]) - 2 * (query(r) - query(l - 1));
    }
    for (int i = 0; i < m; i++)
        cout << ans[i] << endl;
    return 0;
}