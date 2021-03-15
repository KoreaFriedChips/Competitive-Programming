#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <climits>
#include <string>
#include <map>
#include <queue>
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

int ans = -1, a, b, n;
int kids[103];
void check(int x)
{
    if (x < a || x > b || x % 2 == 0)
        return;
    int i = INT_MAX;
    int j = INT_MAX;
    for (int k = 0; k < n; k++)
    {
        i = min(i, abs(x - kids[k]));
        j = min(j, abs(ans - kids[k]));
    }
    if (i > j || ans == -1)
    {
        ans = x;
    }
}

int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> kids[i];
    }
    cin >> a >> b;
    check(a);
    check(b);
    check(a + 1);
    check(b - 1);
    for (int j = 0; j < n; j++)
    {
        for (int k = j + 1; k < n; k++)
        {
            check((kids[j] + kids[k]) / 2 - 1);
            check((kids[j] + kids[k]) / 2);
            check((kids[j] + kids[k]) / 2 + 1);
        }
    }

    cout << ans << endl;
    return 0;
}