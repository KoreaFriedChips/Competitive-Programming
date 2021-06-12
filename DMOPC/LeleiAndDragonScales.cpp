#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
#include <iomanip>
#include <queue>
#include <climits>
#include <map>
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
#define MM 253

int psa[MM][MM];
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    int w, h, n;
    cin >> w >> h >> n;
    int ans = 0;
    for (int i = 1; i <= h; i++)
    {
        for (int j = 1; j <= w; j++)
        {
            cin >> psa[j][i];
            psa[j][i] += (psa[j - 1][i] + psa[j][i - 1] - psa[j - 1][i - 1]);
            for (int k = 1; k <= i; k++)
            {
                ans = max(ans, psa[j][i] - psa[j][i - k] - psa[max(j - (n / k), 0)][i] + psa[max(j - (n / k), 0)][i - k]);
            }
        }
    }
    cout << ans << endl;
    return 0;
}