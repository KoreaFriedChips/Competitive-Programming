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

// https://dmoj.ca/problem/aac2p2
// idea : given that a_i is unique, we realize that the answer is always 1, 2, or 3
//        if n = 2 the ans is 1 if the total number of cookies among the bowls is odd and 2 if the total is even
//        for n >= 3 ans is 3 if we can find 3 bowls that form an arithmetic sequence, otherwise ans = 2

int n, x, sum;
set<int> s;
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        s.insert(x);
        sum += x;
    }
    if (n == 2)
    {
        if (sum % 2 == 1)
            cout << 1 << endl;
        else
            cout << 2 << endl;
        return 0;
    }
    for (int i : s)
    {
        for (int j : s)
        {
            if (i != j && (i + j) % 2 == 0 && s.count((i + j) / 2) != 0)
            {
                cout << 3 << endl;
                return 0;
            }
        }
    }
    cout << 2 << endl;

    return 0;
}