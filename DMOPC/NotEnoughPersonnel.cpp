#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <climits>
#include <cmath>
#include <string>
using namespace std;

#define ll long long
#define pb push_back
#define ull unsigned long long

vector<pair<string, int> > employee;
string name[505];
int skill[505];
vector<pair<int, int> > nouvelle;
int main() 
{ 
    int n; cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> name[i] >> skill[i];
        employee.pb(make_pair(name[i], skill[i]));
    }

    int m; cin >> m;
    for (int i = 0; i < m; i++)
    {
        int s, d; cin >> s >> d;
        nouvelle.pb(make_pair(s, d));
    }
    
    int closest = 2000;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (employee[j].second <= nouvelle[i].first+nouvelle[i].second && employee[j].second >= nouvelle[i].first) {
                closest = min(employee[j].second, closest);
            }
        }
        if (closest == 2000) {
            cout << "No suitable teacher!\n"; 
        }
        for (int k = 0; k < n; k++)
        {
            if (employee[k].second == closest) {
                cout << employee[k].first << '\n';
                break;
            }
        }
        closest = 2000;
    }
    
    return 0; 
} 
