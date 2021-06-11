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
#define MM 1000005
#define MOD 998244353

int psa[26][MM];
string s;
int q, a, b;
char c;
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    getline(cin, s);
    //cin.ignore();
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != ' ')
            psa[s[i] - 'a'][i + 1]++;
        for (int j = 0; j < 26; j++)
            psa[j][i + 2] = psa[j][i + 1];
    }
    cin >> q;
    while (q--)
    {
        cin >> a >> b >> c;
        int ans = psa[c - 'a'][b] - psa[c - 'a'][a - 1];
        cout << ans << endl;
    }

    return 0;
}