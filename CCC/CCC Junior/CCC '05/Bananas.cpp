#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
#include <climits>
#include <map>
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
#define MM 5003

bool monkey(string s)
{
    if (s == "A")
        return true;
    if (s == "")
        return false;
    if (s[0] == 'B' && s[s.size() - 1] == 'S')
    {
        if (monkey(s.substr(1, s.size() - 2)))
        {
            return true;
        }
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'N')
        {
            if (i == 0)
                continue;
            if (monkey(s.substr(0, i)) && monkey(s.substr(i + 1)))
                return true;
        }
    }
    return false;
}

int main()
{
    string s;
    while (cin >> s)
    {
        if (s == "X")
            break;
        if (monkey(s))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}