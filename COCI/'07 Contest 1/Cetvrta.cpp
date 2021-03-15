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

int x[MM];
int y[MM];
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    x[x1]++;
    x[x2]++;
    x[x3]++;
    y[y1]++;
    y[y2]++;
    y[y3]++;
    for (int i = 0; i < MM; i++)
    {
        if (x[i] == 1)
        {
            cout << i;
            break;
        }
    }
    for (int i = 0; i < MM; i++)
    {
        if (y[i] == 1)
        {
            cout << " " << i;
            break;
        }
    }
    cout << endl;
    return 0;
}