#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
#include <climits>
#include <map>
#include <stack>
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
#define MM 1000003
#define MOD 1000000007

int main()
{
    int n;
    while (cin >> n)
    {
        if (n == 0)
            break;
        int ans = 1;
        for (int i = -n; i < 0; i++) //-n to -1 is better than 1 to n, weird
        {
            for (int j = -n; j < 0; j++)
            {
                if (i * i + j * j <= n * n)
                    ans++;
            }
        }
        cout << 4 * ans + 4 * n - 3 << endl;
    }

    return 0;
}