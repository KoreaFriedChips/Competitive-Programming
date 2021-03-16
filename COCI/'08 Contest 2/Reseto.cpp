#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
#include <iomanip>
#include <queue>
#include <set>
#include <cstring>
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

int n, k;
bool isPrime[MM];
void Sieve()
{
    int count = 0;
    memset(isPrime, true, sizeof(isPrime));
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i <= n; i++)
    {
        if (isPrime[i])
        {
            count++;
            if (count == k)
            {
                cout << i << endl;
                return;
            }
            for (int j = 2 * i; j <= n; j += i)
            {
                if (isPrime[j])
                {
                    isPrime[j] = false;
                    count++;
                    if (count == k)
                    {
                        cout << j << endl;
                        return;
                    }
                }
            }
        }
    }
}
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> k;
    Sieve();

    return 0;
}
