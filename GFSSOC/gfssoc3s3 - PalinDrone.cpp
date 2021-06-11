#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <climits>
using namespace std;

#define ll long long
#define pb push_back
#define ull unsigned long long
ull mul_mod(ull a, ull b, ull m) { // a*b%m
    ull r = 0;
    while (a > 0) {
        if (a & 1)
            if((r += b) > m) r %=m;
        a >>= 1;
        if ((b <<= 1) > m) b %= m;
    }
    return r;
}
 
ull qpow(ull a, ull n, ull m) { // (a^n)%m
    ull r = 1;
    while (n > 0) {
        if (n & 1)
            r = mul_mod(r, a, m);
        a = mul_mod(a, a, m);
        n >>= 1;
    }
    return r;
}
int mod = 1000000000;

int main()
{
	ios_base::sync_with_stdio(false);
	int n; cin >> n;
    int ans;
    if (n%2 == 1) {
        ans = qpow(10, (n+1)/2, mod) + qpow(10, (n-1)/2, mod);
        cout << (ans - 2 + mod)%mod << '\n';
    } else {
        ans = 2 * qpow(10, (n+1)/2, mod);
        cout << (ans - 2 + mod)%mod << '\n';
    }
    
    
	return 0;
}
