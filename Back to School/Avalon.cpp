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

int main()
{
    int n;
    cin >> n;
    double ans = 1;
    while (n--)
    {
        double e, p;
        cin >> e >> p;
        ans *= (p - e) / p;
    }
    cout << fixed << setprecision(6) << ans << endl;

    return 0;
}