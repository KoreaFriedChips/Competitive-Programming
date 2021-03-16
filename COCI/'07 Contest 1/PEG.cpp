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

char a[10][10];
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    for (int i = 0; i < 7; i++)
    {
        gets(a[i]);
    }
    int ans = 0;
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (i + 2 < 7 && a[i][j] == 'o' && a[i + 1][j] == 'o' && a[i + 2][j] == '.')
                ans++;
            if (i - 2 >= 0 && a[i][j] == 'o' && a[i - 1][j] == 'o' && a[i - 2][j] == '.')
                ans++;
            if (j + 2 < 7 && a[i][j] == 'o' && a[i][j + 1] == 'o' && a[i][j + 2] == '.')
                ans++;
            if (j - 2 >= 0 && a[i][j] == 'o' && a[i][j - 1] == 'o' && a[i][j - 2] == '.')
                ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
