#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
#include <map>
#include <queue>
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

int a[8];
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    for (int i = 0; i < 6; i++)
    {
        cin >> a[i];
    }
    cout << 1 - a[0] << " ";
    cout << 1 - a[1] << " ";
    cout << 2 - a[2] << " ";
    cout << 2 - a[3] << " ";
    cout << 2 - a[4] << " ";
    cout << 8 - a[5];
    cout << endl;

    return 0;
}