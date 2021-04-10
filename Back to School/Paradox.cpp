#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <climits>
#include <cmath>
#include <set>
using namespace std;

#define ll long long
#define pb push_back
#define ull unsigned long long

vector<string> p;
int main() 
{ 
    cin.sync_with_stdio(0);
    cin.tie(0);
    
    int n; cin >> n;
    while (n--)
    {
        int x; string y; 
        cin >> x;
        if (x == 1) {
            cin >> y;
            if (find(p.begin(), p.end(), y) != p.end() && !p.empty()) {
                cout << "false\n";
            } else {
                p.pb(y);
                cout << "true\n";
            }
        }
        else if (x == 2) {
            cin >> y;
            if (find(p.begin(), p.end(), y) != p.end() && !p.empty()) {
                cout << "true\n";
                p.erase(remove(p.begin(), p.end(), y), p.end());
            } else {
                cout << "false\n";
            }
        }
        else if (x == 3) {
            cin >> y;
            if (find(p.begin(), p.end(), y) != p.end() && !p.empty()) {
                for (int i = 0; i < p.size(); i++)
                {
                    if (p[i] == y) cout << i << endl;
                    break;
                }
            } else {
                cout << -1 << '\n';
            }
        }
        else if (x == 4) {
            sort(p.begin(), p.end());
            for (int i = 0; i < p.size(); i++)
            {
                cout << p[i] << " ";
            }
            cout << endl;
        }
    }
    


    return 0; 
} 
