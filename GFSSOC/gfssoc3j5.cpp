#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstring>
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

bool vis[10];
vector<pii> v;
int a[7];
ll ans = INT_MAX;
int n, z, w;
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> z >> w;
        v.pb(mp(z, w));
        a[i] = i;
    }
    do
    {
        memset(vis, false, sizeof(vis));
        ll stress = 0, temp = 101;
        for (int i = 0; i < n; i++)
        {
            int id = a[i], len = 0, wt = 0;
            for (int j = 0; j < n; j++)
            {
                if (!vis[j])
                    wt += v[j].S;
            }
            stress += (abs(temp - v[id].F) + 1) * wt;
            vis[id] = true;
            temp = v[id].F;
        }
        ans = min(ans, stress);
    } while (next_permutation(a, a + n));
    cout << ans << endl;

    return 0;
}