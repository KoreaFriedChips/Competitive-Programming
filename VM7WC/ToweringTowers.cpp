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

// idea: stack holds pairs, first is Height, second is Index, keep popping if height <= h, ans = curId - stk.top().S

int n, h;
stack<pii> s;
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    s.push(mp(1e9, 0));
    for (int i = 0; i < n; i++)
    {
        cin >> h;
        while (s.top().F <= h)
            s.pop();
        cout << i - s.top().S << " ";
        s.push(mp(h, i));
    }
    cout << endl;
    return 0;
}