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

int a[4];
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    for (int i = 0; i < 4; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    cout << a[0] * a[2] << endl;

    return 0;
}