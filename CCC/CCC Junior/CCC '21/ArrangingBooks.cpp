#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <deque>
#include <string>
using namespace std;

#define ll long long
#define pb push_back
#define ull unsigned long long
#define pii pair<int, int>
#define mp make_pair
#define vi vector<int>
#define endl '\n'
#define MM 5000003

// idea: ans = notL + notM - min(M_in_L, L_in_M)
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    int l = 0, m = 0, s = 0;
    string x;
    cin >> x;
    for (int i = 0; i < x.length(); i++)
    {
        if (x[i] == 'L')
            l++;
        else if (x[i] == 'M')
            m++;
        else if (x[i] == 'S')
            s++;
    }
    int ans = 0, notl = 0, notm = 0;
    for (int i = 0; i < l; i++)
    {
        if (x[i] != 'L')
            ans++;
        if (x[i] == 'M')
            notl++;
    }
    for (int i = l; i < l + m; i++)
    {
        if (x[i] != 'M')
            ans++;
        if (x[i] == 'L')
            notm++;
    }
    ans -= min(notm, notl);
    cout << ans << endl;

    return 0;
}