#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
#include <iomanip>
#include <queue>
#include <climits>
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
#define MM 103

int arr[MM];
int st, ed;
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    int a, b, c;
    cin >> a >> b >> c;
    for (int i = 0; i < 3; i++)
    {
        int x, y;
        cin >> x >> y;
        arr[x]++;
        arr[y]--;
    }
    int curr = 0, ans = 0;
    for (int i = 1; i < 103; i++)
    {
        arr[i] += curr;
        curr = arr[i];
        if (arr[i] == 1)
            ans += a;
        else if (arr[i] == 2)
            ans += b * 2;
        else if (arr[i] == 3)
            ans += c * 3;
    }

    cout << ans << endl;
    return 0;
}