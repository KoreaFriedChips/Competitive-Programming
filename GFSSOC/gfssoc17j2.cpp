#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
#include <climits>
#include <map>
#include <stack>
using namespace std;
#define ll long long
#define pb push_back
#define ull unsigned long long
#define pii pair<int, int>
#define piii pair<int, pii>
#define pis pair<int, string>
#define mp make_pair
#define vi vector<int>
#define vs vector<string>
#define endl '\n'
#define F first
#define S second
#define MM 1000003
#define MOD 1000000007

double sum = 0, a, r;
int main()
{
    for (int i = 0; i < 6; i++)
    {
        int x;
        cin >> x;
        sum += x;
    }
    sum /= 6;
    cin >> a >> r;
    sum += a;
    if (sum >= r)
        cout << "yes" << endl;
    else
        cout << "no" << endl;

    return 0;
}
