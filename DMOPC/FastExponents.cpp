#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstring>
#include <climits>
#include <queue>
#include <iomanip>
using namespace std;
#define ll long long
#define pb push_back
#define ull unsigned long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define mp make_pair
#define vi vector<int>
#define endl '\n'
#define F first
#define S second
#define gp greater<pii>
#define MM 1000005
#define MOD 1000000013

// identify if a number is a power of 2
// bits sol: x & (x-1) == 0
// pop count sol: __builtin_popcountll(x) == 1

bool solve(ull x) //recursive sol, easily interchangeable with while loop
{
    if (x == 1)
        return true;
    else if (x % 2 != 0 || x == 0)
        return false;
    return solve(x / 2);
}

int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        ull x;
        cin >> x;
        if (solve(x))
            cout << "T" << endl;
        else
            cout << "F" << endl;
    }

    return 0;
}
