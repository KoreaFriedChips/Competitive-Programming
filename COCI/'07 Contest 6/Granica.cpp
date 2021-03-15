#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
#include <iomanip>
#include <queue>
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
#define MM 1003

int n;
int a[103];
vector<int> ans;
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int diff = a[1] - a[0];
    for (int i = 1; i * i <= diff; i++)
    {
        if (diff % i == 0)
        {
            int p = diff / i;
            int r1 = a[0] % i, r2 = a[1] % p;
            bool flag1 = true, flag2 = true;
            if (p == i || i == 1)
                flag1 = false;
            for (int j = 2; j < n && (flag1 || flag2); j++)
            {
                if (a[j] % i != r1)
                    flag1 = false;
                if (a[j] % p != r2)
                    flag2 = false;
            }
            if (flag1)
                ans.pb(i);
            if (flag2)
                ans.pb(p);
        }
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i];
        if (i + 1 < ans.size())
            cout << " ";
    }
    cout << endl;
    return 0;
}