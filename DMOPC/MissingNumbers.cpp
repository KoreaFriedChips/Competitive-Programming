#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
#include <iomanip>
#include <queue>
#include <climits>
using namespace std;

#define ll long long
#define pb push_back
#define ull unsigned long long
#define pii pair<int, int>
#define mp make_pair
#define vi vector<int>
#define endl '\n'
#define F first
#define S second
#define MM 103

ll t, n, s;
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> n >> s;
        ll sum = ((n + 1) * n) / 2 - s;
        if (sum - 1 <= n)
            cout << (sum - 1) / 2 << endl;
        else
        {
            ll r = sum - n;
            cout << (n - r + 1) / 2 << endl;
        }
    }

    return 0;
}