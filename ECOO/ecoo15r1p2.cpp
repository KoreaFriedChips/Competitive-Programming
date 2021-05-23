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
#define all(x) (x).begin(), (x).end()
#define MM 7003
#define MOD 1000000007

int w, t = 10;
string s;
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    while (t--)
    {
        cin >> w;
        cin.ignore();
        getline(cin, s);
        while (true)
        {
            if (s.length() <= w)
            {
                cout << s << endl;
                break;
            }
            if (s.rfind(' ', w) == -1)
            {
                for (int i = 0; i < w; i++)
                    cout << s[i];
                cout << endl;
                s.erase(0, w);
                continue;
            }
            cout << s.substr(0, s.rfind(' ', w)) << endl;
            s.erase(0, s.rfind(' ', w) + 1);
        }
        cout << "=====" << endl;
    }
    return 0;
}