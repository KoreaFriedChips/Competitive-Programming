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
#define MM 10005
#define MOD 1000000007

int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    int s, r;
    cin >> s >> r;
    if (s * s > r * r * M_PI)
        cout << "SQUARE" << endl;
    else
        cout << "CIRCLE" << endl;

    return 0;
}