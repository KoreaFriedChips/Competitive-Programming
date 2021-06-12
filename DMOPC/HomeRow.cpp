#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define ull unsigned long long
#define pii pair<int, int>
#define piii pair<pair<int, int>, int>
#define pll pair<ll, ll>
#define mp make_pair
#define vi vector<int>
#define endl '\n'
#define F first
#define S second
#define gp greater<pii>
#define MM 10005
#define MOD 1000000013

string s, t;
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> s >> t;
    int cnt = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == t[i])
            cnt++;
        else
            break;
    }
    int ans = s.length() - cnt;
    ans += t.length() - cnt;
    cout << ans << endl;

    return 0;
}