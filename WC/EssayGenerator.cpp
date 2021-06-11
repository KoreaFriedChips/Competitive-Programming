#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <climits>
#include <cmath>
#include <set>
#include <iomanip>
using namespace std;

#define ll long long
#define pb push_back
#define ull unsigned long long
#define endl '\n'
#define pii pair<int, int>
#define pis pair<int, string>
#define vi vector<int>
#define mp make_pair
#define MM 5003

int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    int n, count = 0;
    cin >> n;
    while (n)
    {
        count++;
        int t = count;
        bool flag = true;
        string ans = "";
        while (t > 0)
        {
            ans += (char)('a' - 1 + t % 27);
            if (t % 27 == 0)
            {
                flag = false;
                break;
            }
            t /= 27;
        }
        if (flag)
        {
            cout << ans << " ";
            n--;
        }
    }
    cout << endl;
    return 0;
}
