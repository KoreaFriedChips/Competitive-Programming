#include <bits/stdc++.h>
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
#define MM 1005
#define MOD 1000000013

int n, ans = INT_MAX;
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        int count = 0;
        for (int i = 0; i < x; i++)
        {
            int y;
            cin >> y;
            count += y;
        }
        if (count < ans)
            ans = count;
    }
    cout << ans << endl;
    return 0;
}