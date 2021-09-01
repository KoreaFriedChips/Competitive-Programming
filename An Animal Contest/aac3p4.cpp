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
#define MOD 1000000007

vector<int> row, col;
map<int, int> m;
int N, M, x, ans;
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i = 1; i <= N; i++)
    {
        cin >> x;
        if (x == -1)
            continue;
        row.pb(x - i);
    }
    for (int i = 1; i <= M; i++)
    {
        cin >> x;
        if (x == -1)
            continue;
        col.pb(x - i);
    }
    for (int i : row)
        m[i]++;
    for (int i : col)
    {
        if (m[i] == 0)
            continue;
        else
        {
            ans++;
            m[i]--;
        }
    }
    cout << ans << endl;
    return 0;
}
