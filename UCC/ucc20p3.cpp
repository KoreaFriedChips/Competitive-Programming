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
#define MM 1005
#define MOD 1000000013
// note: must use your own ceil function
int h, t, m, tract[203], cnt = 0, maxi = 0;
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    cin >> h >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> tract[i];
    }
    cin >> m;
    string s;
    cin >> s;
    for (int i = 0; i < m; i++)
    {
        if (s[i] == 'X' || s[i] == '0')
            cnt++;
        if (i + 1 == m || s[i] == '1')
        {
            if (cnt > maxi)
                maxi = cnt;
            cnt = 0;
        }
    }
    int id;
    for (int i = t - 1; i >= 0; i--)
    {
        if (tract[i] <= maxi)
        {
            id = i;
            break;
        }
    }
    cout << (h - 1) / tract[id] + 1 << endl;

    return 0;
}