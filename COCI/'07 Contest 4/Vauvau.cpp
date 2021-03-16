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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int x;
    for (int i = 0; i < 3; i++)
    {
        cin >> x;
        int count = 0;
        if (x % (a + b) > 0 && x % (a + b) <= a)
            count++;
        if (x % (c + d) > 0 && x % (c + d) <= c)
            count++;

        if (count == 1)
            cout << "one" << endl;
        else if (count == 2)
            cout << "both" << endl;
        else
            cout << "none" << endl;
    }

    return 0;
}