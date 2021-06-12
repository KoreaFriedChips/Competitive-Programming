#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <climits>
#include <stack>
#include <deque>
using namespace std;

#define ll long long
#define pb push_back
#define ull unsigned long long
#define pii pair<int, int>
#define mp make_pair

deque<char> v;
int main() 
{ 
    cin.sync_with_stdio(0);
    cin.tie(0);
    string x; cin >> x;
    for (int i = 0; i < x.length(); i++)
    {
        if (x[i] == '(') {
            v.pb(x[i]);
        }
        else if (x[i] == ')') {
            if (v.empty()) {
                v.pb(x[i]);
            }
            else if (v.back() == '(') {
                v.pop_back();
            } else {
                v.pb(x[i]);
            }
        }
    }

    if (v.empty()) {
        cout << "YES\n";
        return 0;
    } else {
        if (v.front() == '(' && v.back() == ')') {
            v.pop_back();
            v.pop_front();
        } else {
            if (v.front() == ')') {
                v.front() = '(';
                if (v.front() == '(' && v.back() == ')') {
                    v.pop_back();
                    v.pop_front();
                }
            }
            else if (v.back() == '(') {
                v.back() = ')';
                if (v.front() == '(' && v.back() == ')') {
                    v.pop_back();
                    v.pop_front();
                }
            }
        }
    }
    if (v.size() == 0) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    
    return 0; 
} 
