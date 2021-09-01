#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define ull unsigned long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pis pair<int, string>
#define mp make_pair
#define vi vector<int>
#define vpii vector<pii>
#define endl '\n'
#define F first
#define S second
#define MM 100005
#define MOD 1000000

int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    int a, b, c, ans = 0;
    cin >> a >> b >> c;
    ans = max(ans, (a + b) * c);
    ans = max(ans, (b + c) * a);
    ans = max(ans, a + b * c);
    ans = max(ans, c + a * b);
    ans = max(ans, a + b + c);
    ans = max(ans, a * b * c);
    cout << ans << endl;
    return 0;
}