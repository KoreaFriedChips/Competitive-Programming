//1122126d2a39
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

int n, id = 0;
map<int, int> m;
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    int t = 5;
    while (t--)
    {
        cin >> n;
        for (int j = n; j > 0; j--)
        {
            int temp = j;
            for (int i = 2; i * i <= j; i++)
            {
                while (temp % i == 0)
                {
                    temp /= i;
                    m[i]++;
                }
            }
            if (temp != 1)
            {
                m[temp]++;
            }
        }
        for (auto x : m)
        {
            cout << x.F << "^" << x.S;
            if (id < m.size() - 1)
                cout << " * ";
            id++;
        }
        cout << endl;
        m.clear();
        id = 0;
    }
    return 0;
}