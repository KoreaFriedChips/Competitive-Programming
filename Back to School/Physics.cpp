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
//test case 17???
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

ll solve(long double x)
{
    if (x - floor(x) == 0.5)
    {
        ll ans = (ll)floor(x);
        if (ans % 2 == 0)
            return ans;
        else
            return ans + 1;
    }
    return (ll)round(x);
}
long double roundDown(ll x)
{
    return x % 2 == 0 ? x - 0.5 : x - 0.5 + 0.0000005;
}
long double roundUp(ll x)
{
    return x % 2 == 0 ? x + 0.5 : x + 0.5 - 0.0000005;
}
long double mini = 0, maxi = 0;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int r;
        cin >> r;
        mini += roundDown(r);
        maxi += roundUp(r);
        //cout << mini << endl;
        //cout << maxi << endl;
    }
    cout << solve(mini) << endl;
    cout << solve(maxi) << endl;

    return 0;
}