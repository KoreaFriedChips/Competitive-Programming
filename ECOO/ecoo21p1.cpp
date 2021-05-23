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

int main()
{
    int n, m, s;
    cin >> n >> m >> s;
    for (int i = 1; i <= 3; i++)
    {
        n += m;
        if (n >= s)
        {
            cout << n << endl;
            return 0;
        }
    }
    cout << "Who knows..." << endl;
    return 0;
}