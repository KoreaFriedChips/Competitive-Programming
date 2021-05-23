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
#define MM 100005
#define MOD 1000000013

// idea: stack holds pairs, first is Height, second is how many the NEXT bridge can make, if next bridge is greater than equal then update ans

ll n, h, add, ans = 0;
stack<pll> s;
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> h;
        add = 0;
        while (!s.empty() && s.top().F <= h)
        {
            if (s.top().F == h)
                add = s.top().S;
            ans += s.top().S;
            s.pop();
        }
        if (!s.empty())
        {
            //cout << s.top().F << endl;
            ans++;
        }
        s.push(mp(h, add + 1));
    }
    cout << ans << endl;
    return 0;
}