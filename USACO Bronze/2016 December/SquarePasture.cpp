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
#define vi vector<int>
#define endl '\n'
#define MM 5000003

int main()
{
    freopen("square.in", "r", stdin);
    freopen("square.out", "w", stdout);
    int lox = INT_MAX, loy = INT_MAX, hix = INT_MIN, hiy = INT_MIN;
    for (int i = 0; i < 2; i++) {
        int a, b, c, d; cin >> a >> b >> c >> d;
        if (a < lox)
            lox = a;
        if (c > hix) 
            hix = c;
        if (b < loy)
            loy = b;
        if (d > hiy)
            hiy = d;
    }
    int l = abs(hix-lox);
    int wid = abs(hiy-loy);
    int s = max(l, wid);
    cout << s*s << endl;

    return 0;
}