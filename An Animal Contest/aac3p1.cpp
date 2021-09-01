#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>
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
#define MOD 1000000007

int a, b, c, d;
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    cin >> a >> b >> c >> d;
    if (a < b && c < d)
        cout << "Go to the department store" << endl;
    else if (a < b)
        cout << "Go to the grocery store" << endl;
    else if (c < d)
        cout << "Go to the pharmacy" << endl;
    else
        cout << "Stay home" << endl;
    return 0;
}