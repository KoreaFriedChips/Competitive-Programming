#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstring>
#include <climits>
#include <set>
#include <iomanip>
using namespace std;
#define ll long long
#define pb push_back
#define ull unsigned long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pis pair<int, string>
#define mp make_pair
#define vi vector<int>
#define vpii vector<pii>
#define endl '\n'
#define F first
#define S second
#define MM 1000005
#define MOD 1000000013

int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    int x1, y1, x2, y2, x3, y3, x4, y4, a1, b1, c1, a2, b2, c2;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    a1 = y1 - y2;
    b1 = x2 - x1;
    c1 = -1 * (a1 * x1 + b1 * y1);
    a2 = y3 - y4;
    b2 = x4 - x3;
    c2 = -1 * (a2 * x3 + b2 * y3);
    if (a1 * b2 == a2 * b1)
    {
        if (c1 * b2 == c2 * b1)
            cout << "coincident" << endl;
        else
            cout << "parallel" << endl;
    }
    else
    {
        double xcor = (double)(b1 * c2 - b2 * c1) / (b2 * a1 - b1 * a2);
        double ycor = (double)(a1 * c2 - a2 * c1) / (a2 * b1 - a1 * b2);
        cout << fixed << setprecision(6) << xcor << " " << ycor << endl;
    }
    return 0;
}
