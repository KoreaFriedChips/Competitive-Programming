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

int c, n;
int a[5];
int main()
{
    cin >> c >> n;
    for (int i = 0; i < c; i++)
    {
        string s;
        cin >> s;
        if (s == "TOK")
            a[i] = 1;
        else if (s == "English")
            a[i] = 2;
        else if (s == "Chemistry")
            a[i] = 3;
        else if (s == "Math")
            a[i] = 4;
    }
    sort(a, a + c);
    int sum = 0, count = 0;
    for (int i = 0; i < c; i++)
    {
        sum += a[i];
        count++;
        if (sum > n)
        {
            count--;
            break;
        }
    }
    if (count != c)
    {
        cout << "Go to Metro" << endl;
        cout << count << endl;
    }
    else
    {
        cout << "YEA BOI" << endl;
    }

    return 0;
}
