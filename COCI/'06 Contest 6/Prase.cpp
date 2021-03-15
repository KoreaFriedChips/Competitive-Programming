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

string a[103];
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int x, y = 0;
    for (int i = 0; i < n; i++)
    {
        x = 0;
        cin >> a[i];
        for (int j = 0; j < i; j++)
        {
            if (a[j] == a[i])
                x++;
        }
        if (x > i - x)
            y++;
    }
    cout << y << endl;
    return 0;
}