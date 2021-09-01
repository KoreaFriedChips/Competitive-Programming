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
#define MM 1005
#define MOD 1000000007

int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    for (int i = 0; i < 5; i++)
    {
        string s, ans = "";
        getline(cin, s);
        for (int j = 0; j < s.length(); j++)
        {
            if (s[j] == '"')
            {
                int next = s.find("\"", j + 1);
                ans += " " + s.substr(j + 1, next - j - 1);
                j = next;
            }
            if (s[j] == '\'')
            {
                int next = s.find("'", j + 1);
                ans += " " + s.substr(j + 1, next - j - 1);
                j = next;
            }
            if (j < s.length() - 1 && s[j] == '/' && s[j + 1] == '*')
            {
                int next = s.find("*/", j + 1);
                ans += " " + s.substr(j + 2, next - j - 2);
                j = next + 1;
            }
            if (j < s.length() - 1 && s[j] == '/' && s[j + 1] == '/')
            {
                ans += " " + s.substr(j + 2);
                break;
            }
        }
        cout << ans.substr(1) << endl;
    }
    return 0;
}