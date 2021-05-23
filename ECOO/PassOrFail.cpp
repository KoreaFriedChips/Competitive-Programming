#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
#include <iomanip>
#include <queue>
#include <climits>
#include <map>
#include <set>
using namespace std;
#define ll long long
#define pb push_back
#define ull unsigned long long
#define pii pair<int, int>
#define piii pair<int, pii>
#define pis pair<int, string>
#define mp make_pair
#define vi vector<int>
#define vs vector<string>
#define endl '\n'
#define F first
#define S second
#define MM 1000003

double wt, wa, wp, wq;
int main()
{
    for (int i = 0; i < 10; i++)
    {
        cin >> wt >> wa >> wp >> wq;
        int n, ans = 0;
        cin >> n;
        while (n--)
        {
            int t, a, p, q;
            cin >> t >> a >> p >> q;
            if (t * wt / 100 + a * wa / 100 + p * wp / 100 + q * wq / 100 >= 49.9)
            {
                ans++;
            }
        }
        cout << ans << endl;
    }

    return 0;
}