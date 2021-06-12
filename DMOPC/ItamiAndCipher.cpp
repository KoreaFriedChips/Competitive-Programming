#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstring>
#include <iomanip>
#include <queue>
#include <climits>
#include <map>
#include <set>
using namespace std;

#define ll long long
#define pb push_back
#define ull unsigned long long
#define pii pair<int, int>
#define pis pair<int, string>
#define mp make_pair
#define vi vector<int>
#define vs vector<string>
#define endl '\n'
#define F first
#define S second
#define MM 500005
#define MOD 1000000007

int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    string s, t;
    cin >> s >> t;
    string temp = "";
    for (int i = 0; i < s.length(); i++)
    {
        temp += "a";
    }

    for (int i = 26; i >= 0; i--)
    {
        for (int j = 0; j < s.length(); j++)
        {
            if (s[j] + i > 122)
                temp[j] = (char)((s[j] + i) - 26);
            else
                temp[j] = (char)(s[j] + i);
            //cout << temp[j] << " ";
        }
        //cout << endl;
        if (temp.find(t) != string::npos)
        {
            cout << abs(26 - i) << endl;
            cout << temp << endl;
            break;
        }
    }

    return 0;
}