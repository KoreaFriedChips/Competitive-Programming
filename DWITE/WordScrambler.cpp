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
#define MM 5005
#define MOD 1000000013

int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    int t = 5;
    while (t--)
    {
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        do
        {
            cout << s << endl;
        } while (next_permutation(s.begin(), s.end()));
    }

    return 0;
}