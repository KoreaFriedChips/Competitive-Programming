#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstring>
#include <climits>
#include <stack>
#include <iomanip>
using namespace std;
#define ll long long
#define pb push_back
#define ull unsigned long long
#define pii pair<int, int>
#define pis pair<int, string>
#define mp make_pair
#define vi vector<int>
#define vs vector<string>
#define endl '\n'
#define F first
#define S second
#define MM 2000003
#define MOD 1000000007

vi v[MM];
double a[MM];
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        v[a].pb(b);
    }
    a[1] = 1.0;
    for (int i = 1; i <= n; i++)
    {
        double prob = (double)a[i] / v[i].size();
        for (int j : v[i])
            a[j] += prob;
    }
    for (int i = 1; i <= n; i++)
    {
        if (v[i].empty())
            cout << fixed << setprecision(9) << a[i] << endl;
    }

    return 0;
}