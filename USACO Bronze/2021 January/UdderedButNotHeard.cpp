#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <climits>
#include <cmath>
#include <string>
using namespace std;

#define ll long long
#define pb push_back
#define ull unsigned long long

int main() 
{
    string cowphabet, x; cin >> cowphabet >> x;
    int id = 0, count = 0;
    while (id != x.length())
    {
        for (int i = 0; i < cowphabet.length(); i++)
        {
            if (x[id] == cowphabet[i])
            {
                id++;
            }
        }
        count++;
    }
    
    cout << count << endl;
    return 0; 
} 
