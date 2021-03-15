#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
#include <iomanip>
#include <queue>
#include <map>
using namespace std;

#define ll long long
#define pb push_back
#define ull unsigned long long
#define pii pair<int, int>
#define mp make_pair
#define vi vector<int>
#define endl '\n'
#define F first
#define S second
#define MM 1000000003

bool CompareS(pii a, pii b)
{
    return a.second > b.second;
}

void customSort(map<int, int> m)
{
    vector<pii> a;
    for (pii i : m)
    {
        a.push_back(i);
    }
    sort(a.begin(), a.end(), CompareS);
    cout << a[0].S + a[1].S << endl;
}

map<int, int> m;
int x;
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        m[x]++;
    }
    customSort(m);

    return 0;
}