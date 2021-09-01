#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
#include <cmath>
#include <string>
using namespace std;

#define ll long long
#define pb push_back
#define ull unsigned long long
#define pii pair<int, int>
#define mp make_pair
#define endl '\n'
#define vi vector<int>
#define f first
#define s second
#define MAXN 100005

bool isPrime[MAXN];
void Sieve()
{
    memset(isPrime, true, sizeof(isPrime));
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i < MAXN; i++)
    {
        if (isPrime[i])
        {
            for (int j = 2 * i; j < MAXN; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
}
void fillPrefixSum(int n, int prefixSum[])
{
    prefixSum[0] = 0;
    prefixSum[1] = 0;
    int previous = 0;
    for (int i = 2; i < n; i++)
    {
        if (isPrime[i])
        {
            prefixSum[i] = prefixSum[previous] + i;
            previous = i;
        }
        else
        {
            prefixSum[i] = prefixSum[previous];
        }
    }
}
int psa[MAXN];
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    Sieve();
    fillPrefixSum(MAXN, psa);
    // for (int i = 0; i < 12; i++) {
    //     cout << psa[i] << " ";
    // }
    // cout << endl;
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        cout << psa[m] - psa[n - 1] << endl;
    }

    return 0;
}