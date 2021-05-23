#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
#define ll long long
#define pb push_back
#define ull unsigned long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define mp make_pair
#define vi vector<int>
#define endl '\n'
#define F first
#define S second
#define gp greater<pii>
#define MM 1000005
#define MOD 1000000007

string s;
vector<string> v;
int main()
{
    cin >> s;
    int id = 0;
    while (id < s.length())
    {
        int x = id;
        while (true)
        {
            if (s[x] != 'A' && s[x + 1] == 'A')
                x++;
            else if (s[x] == 'A' && s[x + 1] != 'A')
                x++;
            else
                break;
        }
        v.pb(s.substr(id, x - id + 1));
        id = x + 1;
    }
    for (int i = 0; i < v.size(); i++)
    {
        if (i > 0)
            cout << " ";
        cout << v[i];
    }
    cout << endl;
    return 0;
}