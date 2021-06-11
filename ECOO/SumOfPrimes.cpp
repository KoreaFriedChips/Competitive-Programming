#include <bits/stdc++.h>
#include <unordered_map>
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
#define all(x) (x).begin(), (x).end()
#define MM 26
#define MOD 1000000007

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i += 2)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int n, x, t = 5;
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    while (t--)
    {
        cin >> n;
        cout << n << " = ";
        if (isPrime(n))
            cout << n << endl;
        else if (n % 2 == 0)
        {
            for (int i = n / 2; i >= 3; i--)
            {
                if (isPrime(i) && isPrime(n - i))
                {
                    cout << i << " + " << n - i << endl;
                    break;
                }
            }
        }
        else
        {
            bool flag = false;
            for (int i = n / 3; i >= 3; i--)
            {
                if (!isPrime(i))
                    continue;
                x = n - i;
                for (int j = x / 2; j >= i; j--)
                {
                    if (isPrime(j) && isPrime(x - j))
                    {
                        cout << i << " + " << j << " + " << n - i - j << endl;
                        flag = true;
                        break;
                    }
                }
                if (flag)
                    break;
            }
        }
    }
    return 0;
}