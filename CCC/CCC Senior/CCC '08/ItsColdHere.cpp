#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
#include <set>
#include <string>
#include <queue>
using namespace std;

#define ll long long
#define pb push_back
#define ull unsigned long long
#define pii pair<int, int>
#define mp make_pair
#define endl '\n'

vector<pair<string, int> > v;
int main() 
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    string city = "";
    int min = INT_MAX;
    while (true)
    {
        string name; cin >> name;
        int temp; cin >> temp;
        if (name == "Waterloo") {
            break;
        }
        if (temp < min) {
            min = temp;
            city = name;
        }
    }
    cout << city << endl;
    
    return 0;
}