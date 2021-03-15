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
#define MM 1000

map<string, int> m;
vector<pair<int, string> > v;
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    freopen("notlast.in", "r", stdin);
    freopen("notlast.out", "w", stdout);
    int n;
    cin >> n;
    m["Bessie"] = m["Maggie"] = m["Elsie"] = m["Henrietta"] = m["Gertie"] = m["Daisy"] = m["Annabelle"] = 0;
    while (n--)
    {
        string x;
        int y;
        cin >> x >> y;
        m[x] += y;
    }
    for (auto p : m)
    {
        v.pb(mp(p.second, p.first));
    }
    sort(v.begin(), v.end());
    int lo = 0;
    while (lo < 7 && v[lo].first == v[0].first)
    {
        lo++;
    }
    if (lo == 7 || (lo < 6 && v[lo + 1].first == v[lo].first))
    {
        cout << "Tie" << endl;
        return 0;
    }
    cout << v[lo].second << endl;

    return 0;
}
