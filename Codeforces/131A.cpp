#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
#define ll long long
#define pb push_back
#define ull unsigned long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pic pair<int, char>
#define mp make_pair
#define vi vector<int>
#define endl '\n'
#define F first
#define S second
#define gp greater<pii>
#define all(x) (x).begin(), (x).end()
#define MM 100005
#define MOD 998244353

string s;
bool flag = false;
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    cin >> s;

    for (int i = 1; i < s.length(); i++)
    {
        if ((int)s[i] >= 97)
        {
            flag = true;
            break;
        }
    }
    if (flag)
        cout << s << endl;
    else
    {
        if (s[0] >= 97)
            cout << (char)toupper(s[0]);
        else
            cout << (char)tolower(s[0]);
        for (int i = 1; i < s.length(); i++)
            cout << (char)tolower(s[i]);
        cout << endl;
    }

    return 0;
}