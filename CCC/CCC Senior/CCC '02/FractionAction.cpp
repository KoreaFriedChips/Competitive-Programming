#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
#include <climits>
#include <set>
#include <queue>
using namespace std;
#define ll long long
#define pb push_back
#define ull unsigned long long
#define pii pair<int, int>
#define piii pair<int, pii>
#define pis pair<int, string>
#define mp make_pair
#define vi vector<int>
#define vs vector<string>
#define endl '\n'
#define F first
#define S second
#define MM 500003
#define MOD 1000000007

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    int n, x;
    cin >> n >> x;
    if (n % x == 0)
        cout << n / x << endl;
    else
    {
        int g = gcd(n % x, x);
        if (n / x == 0)
            cout << (n % x) / g << "/" << x / g << endl;
        else
            cout << n / x << " " << (n % x) / g << "/" << x / g << endl;
    }

    return 0;
}