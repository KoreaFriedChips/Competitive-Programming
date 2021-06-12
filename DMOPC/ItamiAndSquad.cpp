#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstring>
#include <climits>
#include <set>
#include <map>
using namespace std;
#define ll long long
#define pb push_back
#define ull unsigned long long
#define pii pair<int, int>
#define pis pair<int, string>
#define mp make_pair
#define vi vector<int>
#define vpii vector<pii>
#define endl '\n'
#define F first
#define S second
#define MM 100005
#define MOD 1000000

int n, l, r, a[MM], ans = 0;
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> l >> r;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + n + 1);
    reverse(a + 1, a + n + 1);
    for (int i = r; i <= n; i += l)
        ans += a[i];
    cout << ans << endl;
    return 0;
}