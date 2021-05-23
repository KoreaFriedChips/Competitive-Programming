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
#define MM 200005
#define MOD 1000000007

ll n, len;
vector<ll> ans;
int main()
{
    cin >> n;
    n++;
    while (n % 2 == 0)
    {
        ans.push_back(2);
        n /= 2;
        len++;
    }
    for (ll d = 3; d * d <= n; d += 2)
    {
        while (n % d == 0)
        {
            ans.push_back(d);
            n /= d;
            len += d - 1;
        }
    }
    if (n != 1)
    {
        ans.push_back(n);
        len += n - 1;
    }

    if (len > 100000)
    {
        cout << "Sad Chris" << endl;
        return 0;
    }
    cout << len << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i] - 1; j++)
            cout << i + 1 << " ";
    }
    cout << endl;
    return 0;
}