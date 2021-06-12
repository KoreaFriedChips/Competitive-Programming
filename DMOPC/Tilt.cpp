#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstring>
#include <climits>
#include <set>
#include <iomanip>
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
#define MM 105
#define MOD 1000000013

long double n, x, ans = 0;
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        ans += x;
        ans = fmod(ans, 360);
    }
    cout << fixed << setprecision(5) << ans << endl;

    return 0;
}
