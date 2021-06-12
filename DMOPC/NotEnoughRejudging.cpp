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

string sub[1000005];
int main() 
{ 
    int n; cin >> n;
    int ac = 0, wa = 0, tle = 0, ir = 0;
    for (int i = 0; i < n; i++)
    { 
        cin >> sub[i];
        if (sub[i] == "WA") wa++;
        else if (sub[i] == "IR") ir++;
    }

    int waC = floor((double)wa*0.3), irC = 20;
    for (int i = 0; i < n; i++)
    {
        if (sub[i] == "WA") {
            if (waC > 0) {
                sub[i] = "AC";
                waC--;
            }
        }
        else if (sub[i] == "TLE") {
            sub[i] = "WA";
        }
        else if (irC > 10) {
            if (sub[i] == "IR") {
                sub[i] = "AC";
                irC--;
            }
        }
        else if (irC > 0 && irC <= 10) {
            if (sub[i] == "IR") {
                sub[i] = "WA";
                irC--;
            }
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << sub[i] << '\n';
    }
    

    return 0; 
} 
