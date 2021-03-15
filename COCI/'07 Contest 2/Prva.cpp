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

char a[21][21];
vector<string> v;

void solve(int r, int c)
{
    string p = "";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (a[i][j] == '#')
            {
                v.pb(p);
                p = "";
            }
            else if (j + 1 == c)
            {
                p += a[i][j];
                v.pb(p);
                p = "";
            }
            else
            {
                p += a[i][j];
            }
        }
    }
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            if (a[j][i] == '#')
            {
                v.pb(p);
                p = "";
            }
            else if (j == r - 1)
            {
                p += a[j][i];
                v.pb(p);
                p = "";
            }
            else
            {
                p += a[j][i];
            }
        }
    }
}

int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    int r, c;
    cin >> r >> c;
    for (int i = 0; i < r; i++)
    {
        cin >> a[i];
    }

    solve(r, c);
    sort(v.begin(), v.end());
    for (string s : v)
    {
        if (s != "" && s.length() >= 2)
        {
            cout << s << endl;
            break;
        }
    }

    return 0;
}