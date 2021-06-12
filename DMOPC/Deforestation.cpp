#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstring>
#include <climits>
#include <queue>
#include <iomanip>
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
#define MOD 1000000013

// idea: simple psa queries

int n, q, a, b, psa[MM];
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> psa[i];
        psa[i] += psa[i - 1];
    }
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> a >> b;
        cout << psa[++b] - psa[a] << endl;
    }

    return 0;
}
