#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstring>
#include <climits>
#include <stack>
#include <map>
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
#define MM 11
#define MOD 1000000007

// idea: for each iteration (letter), freq is an accumulator for every letter (keep track of length)

ll freq[26], temp[26], r, t;
char first, last;
string a, rules[26];
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    for (int tc = 0; tc < 10; tc++)
    {
        fill(begin(freq), end(freq), 0);
        cin >> r >> t >> a;
        first = a[0];
        last = a[a.length() - 1];
        for (int i = 0; i < r; i++)
        {
            char c;
            string x;
            cin >> c >> x;
            rules[c - 'A'] = x;
        }
        for (int i = 0; i < a.length(); i++)
            freq[a[i] - 'A']++;
        for (int i = 0; i < t; i++)
        {
            fill(begin(temp), end(temp), 0);
            for (int j = 0; j < 26; j++)
            {
                for (char c : rules[j])
                    temp[c - 'A'] += freq[j];
            }
            first = rules[first - 'A'][0];
            last = rules[last - 'A'][rules[last - 'A'].length() - 1];
            for (int j = 0; j < 26; j++)
                freq[j] = temp[j];
        }
        ll sum = 0;
        for (ll i : freq)
        {
            sum += i;
        }
        cout << first << last << " " << sum << endl;
    }

    return 0;
}