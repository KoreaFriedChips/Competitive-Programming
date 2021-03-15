#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <deque>
#include <string>
using namespace std;

#define ll long long
#define pb push_back
#define ull unsigned long long
#define pii pair<int, int>
#define mp make_pair
#define vi vector<int>
#define endl '\n'

int main()
{
    freopen("paint.in", "r", stdin);
    freopen("paint.out", "w", stdout);
    int a, b, c, d; cin >> a >> b >> c >> d;
    int ans = 0;
    ans += b-a;
    ans += d-c;
    ans -= max(min(b, d)-max(a, c), 0);
    cout << ans << endl;
    return 0;
}