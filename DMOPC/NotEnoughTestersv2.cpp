#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
#include <iomanip>
#include <queue>
#include <map>
#include <cstring>
#include <climits>
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
#define MM 100003

int main()
{
    vi fac(MM, 1);
    vector<vi> v(MM);
    v[1].push_back(1); // precompute all factors
    for (int i = 2; i < MM; i++)
    {
        for (int j = i; j < MM; j += i)
            fac[j]++;
        v[fac[i]].push_back(i);
    }
    int t;
    cin >> t;
    while (t--)
    {
        int k, a, b;
        cin >> k >> a >> b;
        // int R = upper_bound(v[k].begin(), v[k].end(), b) - v[k].begin();
        // int L = lower_bound(v[k].begin(), v[k].end(), a) - v[k].begin();
        cout << upper_bound(v[k].begin(), v[k].end(), b) - lower_bound(v[k].begin(), v[k].end(), a) << endl;
    }

    return 0;
}