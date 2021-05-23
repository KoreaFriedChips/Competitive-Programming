#include <bits/stdc++.h>
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
#define all(x) (x).begin(), (x).end()
#define MM 10005
#define MOD 1000000007

int f, r, q, a, b, c;
int psa[6][MM];
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    cin >> f >> r;
    for (int i = 1; i <= f; i++)
    {
        for (int j = 1; j <= r; j++)
        {
            cin >> psa[i][j];
            psa[i][j] += psa[i][j - 1];
        }
    }
    cin >> q;
    while (q--)
    {
        cin >> a >> b >> c;
        cout << psa[c][b] - psa[c][a - 1] << endl;
    }

    return 0;
}