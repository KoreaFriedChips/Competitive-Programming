#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstring>
#include <climits>
#include <stack>
#include <queue>
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
#define MM 1003
#define MOD 1000000007

int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    for (int i = 0; i < 10; i++)
    {
        int n, m, d;
        cin >> n >> m >> d;
        int a[MM] = {};
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            a[x]++;
        }
        int ans = 0, total = n;
        for (int i = 1; i <= d; i++)
        {
            if (n == 0)
            {
                n = total;
                ans++;
            }
            n--;
            total += a[i];
            n += a[i];
        }
        cout << ans << endl;
    }

    return 0;
}