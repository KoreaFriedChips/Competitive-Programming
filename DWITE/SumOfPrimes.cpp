#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstring>
#include <climits>
#include <queue>
#include <map>
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
#define MM 100005
#define MOD 1000000013

bool isPrime[MM];
void Sieve()
{
    memset(isPrime, true, sizeof(isPrime));
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i < MM; i++)
    {
        if (isPrime[i])
        {
            for (int j = 2 * i; j < MM; j += i)
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
int psa[MM];
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    Sieve();
    fillPrefixSum(MM, psa);
    int t = 5;
    while (t--)
    {
        int m;
        cin >> m;
        cout << psa[m] - psa[0] << endl;
    }

    return 0;
}