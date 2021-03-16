#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
#include <iomanip>
#include <queue>
#include <set>
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

pii p1, p2, p3;
int area(pii a, pii b, pii c)
{
    return abs(a.F * b.S - a.S * b.F + b.F * c.S - b.S * c.F + c.F * a.S - c.S * a.F);
}

int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    cin >> p1.F >> p1.S >> p2.F >> p2.S >> p3.F >> p3.S;
    int tri = area(p1, p2, p3);
    int n;
    cin >> n;
    int ans = 0;
    while (n--)
    {
        pii p4;
        cin >> p4.F >> p4.S;
        if (tri == area(p1, p2, p4) + area(p2, p3, p4) + area(p1, p3, p4))
            ans++;
    }
    cout << fixed << setprecision(1) << tri / 2.0 << endl;
    cout << ans << endl;
    return 0;
}