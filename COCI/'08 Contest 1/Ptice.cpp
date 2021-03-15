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
#define vi vector<int>
#define pii pair<int, int>
#define mp make_pair
#define endl '\n'
#define MOD 1000000007
#define F first
#define S second

vector<pair<string, int> > v;
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    v.pb(mp("ABC", 0));
    v.pb(mp("BABC", 0));
    v.pb(mp("CCAABB", 0));
    int n;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (v[i].F[j % v[i].F.length()] == s[j])
                v[i].S++;
        }
    }
    int ans = 0;
    for (int i = 0; i < 3; i++)
    {
        if (v[i].S > ans)
            ans = v[i].S;
    }
    cout << ans << endl;
    if (v[0].S == ans)
        cout << "Adrian" << endl;
    if (v[1].S == ans)
        cout << "Bruno" << endl;
    if (v[2].S == ans)
        cout << "Goran" << endl;

    return 0;
}
