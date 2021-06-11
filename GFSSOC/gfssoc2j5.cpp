#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstring>
#include <climits>
#include <set>
#include <map>
using namespace std;
#define ll long long
#define pb push_back
#define ull unsigned long long
#define pii pair<int, int>
#define pis pair<int, string>
#define mp make_pair
#define vi vector<int>
#define vpii vector<pii>
#define endl '\n'
#define F first
#define S second
#define MM 500005
#define MOD 1000000

int n, q, ep[MM], dpl[MM], dpr[MM], freql[MM], freqr[MM];
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> q;
    for (int i = 1; i <= n; i++)
        cin >> ep[i];
    dpl[1] = ep[1];
    dpr[n] = ep[n];
    freql[1] = 1;
    freqr[n] = 1;
    for (int i = 1; i <= n; i++)
    {
        if (ep[i] > dpl[i - 1])
        {
            dpl[i] = ep[i];
            freql[i] = 1;
        }
        else if (ep[i] == dpl[i - 1])
        {
            dpl[i] = dpl[i - 1];
            freql[i] = freql[i - 1] + 1;
        }
        else
        {
            dpl[i] = dpl[i - 1];
            freql[i] = freql[i - 1];
        }
    }
    for (int i = n - 1; i > 0; i--)
    {
        if (ep[i] > dpr[i + 1])
        {
            dpr[i] = ep[i];
            freqr[i] = 1;
        }
        else if (ep[i] == dpr[i + 1])
        {
            dpr[i] = dpr[i + 1];
            freqr[i] = freqr[i + 1] + 1;
        }
        else
        {
            dpr[i] = dpr[i + 1];
            freqr[i] = freqr[i + 1];
        }
    }
    for (int i = 0; i < q; i++)
    {
        int a, b;
        cin >> a >> b;
        int ans = 0, count = 0;
        ans = max(dpl[a - 1], dpr[b + 1]);
        if (dpl[a - 1] == dpr[b + 1])
            count = freql[a - 1] + freqr[b + 1];
        else if (dpl[a - 1] > dpr[b + 1])
            count = freql[a - 1];
        else
            count = freqr[b + 1];
        //cout << dpl[a - 1] << " " << dpr[b + 1] << endl;
        cout << ans << " " << count << endl;
    }

    return 0;
}