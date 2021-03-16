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

int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    ull ans = 0;
    for (int i = 2; i < n - 1; i++)
    {
        ans += (i - 1) * (n - 1 - i);
    }
    ans *= n;
    ans /= 4;
    cout << ans << endl;

    return 0;
}
