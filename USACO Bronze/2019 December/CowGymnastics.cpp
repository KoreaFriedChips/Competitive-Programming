#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
#include <unordered_map>
#include <queue>
using namespace std;

#define ll long long
#define pb push_back
#define ull unsigned long long
#define pii pair<int, int>
#define mp make_pair
#define vi vector<int>
#define endl '\n'
#define f first
#define s second

int n, k;
int cow[10][20];

bool better(int a, int b, int session)
{
    int apos, bpos;
    for (int i = 0; i < n; i++)
    {
        if (cow[session][i] == a)
            apos = i;
        if (cow[session][i] == b)
            bpos = i;
    }
    return apos < bpos;
}

int good(int a, int b)
{
    int total = 0;
    for (int i = 0; i < k; i++)
    {
        if (better(a, b, i))
            total++;
    }
    return total;
}

int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    cin >> k >> n;
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> cow[i][j];
        }
    }
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (good(i, j) == k)
                ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
