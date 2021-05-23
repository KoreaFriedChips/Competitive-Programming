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
#define MM 1000005
#define MOD 1000000

string s;
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    cin >> s;
    int ans = 0;
    for (int i = 0; i < s.length() - 1; i++)
    {
        if (s[i] == '2' && s[i + 1] != '5')
            ans++;
    }
    if (s.back() == '2')
        ans++;

    cout << ans << endl;

    return 0;
}