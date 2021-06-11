//1122126d2a39
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
#define ll long long
#define pb push_back
#define ull unsigned long long
#define endl '\n'
#define pii pair<int, int>
#define pis pair<int, string>
#define vi vector<int>
#define mp make_pair
#define F first
#define S second
#define MM 10005
#define MOD 1000000007

int a[MM], n, t, x;
int solve(int k)
{
    unordered_map<int, int> m;
    int res = 0, cur = 0;
    for (int i = 0; i < n; i++)
    {
        cur += a[i];
        if (cur == k)
            res++;
        if (m.find(cur - k) != m.end())
            res += m[cur - k];
        m[cur]++;
    }
    return res;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> t;
    while (t--)
    {
        cin >> x;
        cout << solve(x) << " ";
    }
    cout << endl;

    return 0;
}