#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstring>
#include <climits>
#include <set>
#include <queue>
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
#define MM 1000005
#define MOD 1000000

int first[MM], last[MM];
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    fill(begin(first), end(first), MM);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        first[x] = min(first[x], i);
        last[x] = i;
    }
    int ans = 0;
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        if (first[a] <= first[b])
            ans = max(ans, last[b] - first[a] + 1);
    }
    cout << ans << endl;

    return 0;
}