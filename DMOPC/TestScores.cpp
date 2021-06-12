#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstring>
#include <climits>
#include <queue>
#include <unordered_map>
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

int N;
double n, a, b, t;
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    while (N--)
    {
        cin >> n >> a >> b >> t;
        ll ans = ceil(((t + n * b) / (a + b));
        cout << ((ans > n) ? -1 : ans) << endl;
    }

    return 0;
}