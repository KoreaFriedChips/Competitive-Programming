//1122126d2a39
#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <climits>
#include <cmath>
#include <set>
using namespace std;

#define ll long long
#define pb push_back
#define ull unsigned long long
#define endl '\n'
#define pii pair<int, int>
#define vi vector<int>
#define mp make_pair
#define MM 10003

int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    for (int i = 0; i < 5; i++)
    {
        int n;
        cin >> n;
        vi v;
        for (int j = 1; j <= n; j++)
        {
            v.pb(j);
        }
        reverse(v.begin(), v.end());
        vi ans;
        bool flag = false;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            if (x >= v.size())
            {
                flag = true;
                break;
            }
            ans.pb(v.at(x));
            v.erase(v.begin() + x);
        }
        if (flag)
            cout << "IMPOSSIBLE" << endl;
        else
        {
            for (int j = 0; j < ans.size(); j++)
            {
                cout << ans[j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}