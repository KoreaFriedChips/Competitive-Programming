#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstring>
#include <climits>
#include <stack>
#include <map>
using namespace std;
#define ll long long
#define pb push_back
#define ull unsigned long long
#define pii pair<int, int>
#define pis pair<int, string>
#define mp make_pair
#define vi vector<int>
#define vs vector<string>
#define endl '\n'
#define F first
#define S second
#define MM 100003
#define MOD 1000000007

vi v[MM];
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    int n, q;
    cin >> n >> q;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        v[x].pb(i);
    }
    for (int i = 0; i < q; i++)
    {
        int l, r, x;
        cin >> l >> r >> x;
        bool flag = false;
        for (int j = 1; j * j < x; j++)
        {
            if (x % j != 0)
                continue;
            int P = lower_bound(v[j].begin(), v[j].end(), l) - v[j].begin();
            int Q = lower_bound(v[x / j].begin(), v[x / j].end(), l) - v[x / j].begin();
            if (P < v[j].size() && Q < v[x / j].size() && v[j][P] <= r && v[x / j][Q] <= r)
            {
                cout << "YES" << endl;
                //cout << P << " " << Q << endl;
                flag = true;
                break;
            }
        }
        if (!flag)
            cout << "NO" << endl;
    }

    return 0;
}