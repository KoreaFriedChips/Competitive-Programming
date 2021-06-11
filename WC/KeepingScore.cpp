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
#define MOD 1000000013

// idea: collect all strengths of every enemy, keep an over all counter to see for which enemy
//       will Glimi win more (g_enemies - gCnt > l_enemies - lCnt)

int l, g, sl[MM], sg[MM];
vi strength;
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    cin >> l >> g;
    for (int i = 0; i < l; i++)
    {
        cin >> sl[i];
        strength.pb(sl[i]);
    }
    for (int i = 0; i < g; i++)
    {
        cin >> sg[i];
        strength.pb(sg[i]);
    }
    sort(sl, sl + l);
    sort(sg, sg + g);
    sort(strength.begin(), strength.end());
    int L = 0, G = 0;
    for (int i = 0; i < strength.size(); i++)
    {
        while (L < l && sl[L] < strength[i])
            L++;
        while (G < g && sg[G] < strength[i])
            G++;
        if (g - G > l - L)
        {
            cout << strength[i] << endl;
            return 0;
        }
    }
    cout << -1 << endl;

    return 0;
}