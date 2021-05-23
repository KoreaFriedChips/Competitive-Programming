#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstring>
#include <climits>
#include <set>
#include <map>
using namespace std;
#define ll long long
#define pb push_back
#define ull unsigned long long
#define pii pair<int, int>
#define pis pair<int, string>
#define mp make_pair
#define vi vector<int>
#define vpii vector<pii>
#define endl '\n'
#define F first
#define S second
#define MM 1005
#define MOD 1000000007

int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ans = n * 10;
        map<string, int> m;
        vector<string> v;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            v.pb(s);
        }
        m[v[n - 1]] = 1;
        int count = 1, temp = 0;
        for (int i = 0; i < n; i++)
        {
            if (!m[v[i]])
            {
                count++;
                m[v[i]] = count;
                temp = max(temp, count);
            }
            else
                count = m[v[i]];
        }
        ans -= (temp - 1) * 20;
        cout << ans << endl;
    }

    return 0;
}