#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
#include <iomanip>
#include <queue>
#include <set>
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

int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    int a, b, c;
    cin >> a >> b >> c;
    if (a == b + c)
        cout << a << "=" << b << "+" << c << endl;
    else if (a == b - c)
        cout << a << "=" << b << "-" << c << endl;
    else if (a == b * c)
        cout << a << "=" << b << "*" << c << endl;
    else if (a == b / c)
        cout << a << "=" << b << "/" << c << endl;
    else if (a + b == c)
        cout << a << "+" << b << "=" << c << endl;
    else if (a - b == c)
        cout << a << "-" << b << "=" << c << endl;
    else if (a * b == c)
        cout << a << "*" << b << "=" << c << endl;
    else if (a / b == c)
        cout << a << "/" << b << "=" << c << endl;

    return 0;
}