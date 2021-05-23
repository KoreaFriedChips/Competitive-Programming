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
#define MM 200005
#define MOD 1000000007

int t = 10, n;
string s;
int main()
{
    while (t--)
    {
        set<string> ans;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            bool at = false, plus = false;
            string add = "";
            for (int j = 0; j < s.length(); j++)
            {
                if (tolower(s[j]) == '.' && !at)
                    continue;
                else if (tolower(s[j]) == '+')
                    plus = true;
                else if (tolower(s[j]) == '@')
                {
                    at = true;
                    plus = false;
                }
                if (plus && !at)
                    continue;
                else
                    add += tolower(s[j]);
            }
            ans.insert(add);
        }
        cout << ans.size() << endl;
        // for (string str : ans)
        //     cout << str << endl;
    }

    return 0;
}