#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstring>
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
#define MM 148740

bool isPrime[MM];
vi cnt;
int n, x;
void Sieve()
{
    memset(isPrime, true, sizeof(isPrime));
    for (int i = 2; i < n + 1; i++)
    {
        if (isPrime[i])
        {
            cnt.pb(i);
            for (int j = 2 * i; j < n + 1; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
}

int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> x;
    Sieve();
    int ans = 0;
    for (int i : cnt)
    {
        int a = n - i;
        ans += a / x + 1;
        a--;
        if (a >= 0)
            ans += a / x + 1;
    }
    cout << ans << endl;

    return 0;
}