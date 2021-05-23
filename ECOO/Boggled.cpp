#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstring>
#include <climits>
#include <set>
#include <queue>
using namespace std;
#define ll long long
#define pb push_back
#define ull unsigned long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pis pair<int, string>
#define mp make_pair
#define vi vector<int>
#define vpii vector<pii>
#define endl '\n'
#define F first
#define S second
#define MM 100005
#define MOD 1000000013

int n;
char a[5][5];
string str;
bool vis[5][5];
bool fun(int i, int r, int c, string s)
{
    if (i == s.length() - 1)
        return true;
    vis[r][c] = true;
    for (int dr = -1; dr <= 1; dr++)
    {
        for (int dc = -1; dc <= 1; dc++)
        {
            int curx = r + dr, cury = c + dc;
            if (curx < 0 || cury < 0 || curx >= 4 || cury >= 4 || vis[curx][cury] || a[curx][cury] != s[i + 1])
                continue;
            if (fun(i + 1, curx, cury, s))
            {
                vis[r][c] = false;
                return true;
            }
        }
    }
    vis[r][c] = false;
    return false;
}
int points(string s)
{
    if (s.length() <= 4)
        return 1;
    if (s.length() <= 7)
        return s.length() - 3;
    return 11;
}
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    int t = 5;
    while (t--)
    {
        for (int i = 0; i < 4; i++)
            cin >> a[i];
        cin >> n;
        set<string> s;
        int score = 0, good = 0, nf = 0, ts = 0, r = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> str;
            bool found = false;
            memset(vis, false, sizeof(vis));
            if (str.length() < 3)
            {
                ts++;
                continue;
            }
            if (s.find(str) != s.end())
            {
                r++;
                continue;
            }
            for (int r = 0; r < 4 && !found; r++)
            {
                for (int c = 0; c < 4 && !found; c++)
                    if (a[r][c] == str[0])
                        found = fun(0, r, c, str);
            }
            if (!found)
                nf++;
            else
            {
                good++;
                score += points(str);
                //cout << str << endl;
            }
            s.insert(str);
        }

        cout << "Your score: " << score << " (" << good << " good, " << nf << " not found, " << ts << " too short, " << r << " repeated)" << endl;
    }

    return 0;
}