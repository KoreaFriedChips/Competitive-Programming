#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <set>
#include <iomanip>
#include <set>
using namespace std;

#define ll long long
#define pb push_back
#define ull unsigned long long
#define pii pair<int, int>
#define mp make_pair
#define endl '\n'
#define INF 0x3f3f3f3f

bool isPrime[10000010];
vector<int> primes;
set<ll> s;
int x;

void Sieve() {
    memset(isPrime, true, sizeof(isPrime));
    for (int i = 2; i < 10000010; i++)
    {
        if (isPrime[i]) {
            for (int j = 2*i; j < 10000010; j += i)
            {
                isPrime[j] = false;
            }
            primes.pb(i);
            s.insert(i);
        }
    }
}

void case2() {
    int a = -INF, b = -INF, c = -INF;
    vector<int> diff, res;
    for (int i = 0; i < primes.size(); i++)
    {
        if (primes[i]*3 > x)
            break;
        else {
            diff.pb(x - primes[i]*3);
            res.pb(primes[i]);
            a =  primes[i];
        }
    }
    bool flag = false;
    for (int i = diff.size(); i >= 0; i--)
    {
        for (int j = diff[i]/2; j >= 0; j--)
        {
            if (res[i] + j <= 10000000 && res[i] - j + diff[i] <= 10000000) {
                if (isPrime[res[i] + j] && isPrime[res[i] - j + diff[i]]) {
                    a = x - res[i] * 2 - diff[i], b = res[i] + j, c = res[i] - j + diff[i];
                    if (a <= b &&  b <= c) {
                        flag = true;
                        break;
                    }
                }
            }
            else 
                break;
        }
        if (flag)
            break; 
    }
    cout << x << " = " << a << " + " << b << " + " << c << endl;
}

void case1() {
    int a = -INF, b = -INF;
    bool ans = false;
    for (int i = 0; i < primes.size(); i++)
    {
        if (primes[i] > x/2)
            break;
        if (s.count(x-primes[i])) {
            a = primes[i];
            b = x - primes[i];
            if (a > 4 && b > 4) {
                ans = true;
            }
        }
    }
    if (!ans)
        case2();
    else 
        cout << x << " = " << a << " + " << b << endl;
    
}


int main() 
{
    Sieve();
    int n = 5;
    while (n--)
    {
        cin >> x; 
        if (isPrime[x]) {
            cout << x << " = " << x << endl;
        }
        else {
            case1();
        }
    }
    
   return 0;
}