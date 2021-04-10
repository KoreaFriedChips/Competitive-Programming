#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
#include <iomanip>
#include <queue>
#include <climits>
#include <map>
#include <set>
using namespace std;

#define ll long long
#define pb push_back
#define ull unsigned long long
#define pii pair<int, int>
#define psi pair<string, int>
#define mp make_pair
#define vi vector<int>
#define endl '\n'
#define F first
#define S second
#define MM 100003
#define MOD 1000000007

vector<char> v;
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    v.resize(n);
    for (auto &x : v)
    {
        string s;
        cin >> s;
        x = tolower(s[0]);
    }
    ull ans = 0, count = 0;
    char c = '0';
    for (int i = 0; i < n; i++)
    {
        if (v[i] != c)
        {
            //cout << count << endl;
            ans += count * (count + 1) / 2;
            count = 0;
            c = v[i];
        }
        count++;
    }
    ans += count * (count + 1) / 2;
    cout << ans % MOD << endl;

    return 0;
}