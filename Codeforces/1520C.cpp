#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
#define ll long long
#define pb push_back
#define ull unsigned long long
#define pii pair<int, int>
#define piii pair<pair<int, int>, int>
#define pll pair<ll, ll>
#define pic pair<int, char>
#define mp make_pair
#define vi vector<int>
#define endl '\n'
#define F first
#define S second
#define gp greater<pii>
#define all(x) (x).begin(), (x).end()
#define MM 200005
#define MOD 1000000007

int t, n;
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[n][n];
        if (n == 2)
        {
            cout << -1 << endl;
            continue;
        }
        int id = 1;

        for (int i = 0; i < n; i++)
        {
            int j;
            if (i % 2 == 0)
                j = 0;
            else
                j = 1;
            for (; j < n; j += 2)
            {
                a[i][j] = id;
                id++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            int j;
            if (i % 2 == 0)
                j = 1;
            else
                j = 0;
            for (; j < n; j += 2)
            {
                a[i][j] = id;
                id++;
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                cout << a[i][j] << " ";
            cout << endl;
        }
    }
    return 0;
}