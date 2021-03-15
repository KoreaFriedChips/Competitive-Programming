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

int main() 
{ 
    string x; cin >> x;
    int total = 0, pretotal = 0, hold = INT_MAX; 
    for (int i = 0; i < x.length(); i+=2)
    {
        int val = (int)x[i] - 48;
        string y = x.substr(i+1,1);
        int holder = 0, temp;
        if (y == "I") holder = 1;
        else if (y == "V") holder = 5;
        else if (y == "X") holder = 10;
        else if (y == "L") holder = 50;
        else if (y == "C") holder = 100;
        else if (y == "D") holder = 500;
        else if (y == "M") holder = 1000;
        temp = holder*val;
        if (holder > hold) {
            total -= 2*pretotal;
        }
        total += temp;
        hold = holder;
        pretotal = temp;
    }
    cout << total << endl;
    return 0; 
} 
