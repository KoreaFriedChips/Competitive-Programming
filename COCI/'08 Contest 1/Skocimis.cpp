#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
#include <map>
#include <queue>
using namespace std;

#define ll long long
#define pb push_back
#define ull unsigned long long
#define vi vector<int>
#define pii pair<int, int>
#define mp make_pair
#define endl '\n'
#define MOD 1000000007
#define f first
#define s second

int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    int a, b, c;
    cin >> a >> b >> c;
    int ans = 0;
    for (int i = 1; i < c; i++)
    {
        if ((a + i > b && a + i < c) || (c - i > a && c - i < b))
            ans++;
    }

    cout << ans << endl;

    return 0;
}
