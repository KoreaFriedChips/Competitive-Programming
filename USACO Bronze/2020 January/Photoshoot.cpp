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

int n;
int b[100000], d[100000], ans[100000];
bool used[100000];
int main() 
{ 
    cin >> n;
    for (int i = 0; i < n-1; i++)
    {
        cin >> b[i]; //handle input
    }
    for (int i = 2; i < n; i++)
    {
        d[i] = b[i-1] - b[i-2]; //set up diff arr
    }
    
    for (int a = 1; a <= n; a++)
    {
        ans[0] = a; ans[1] = b[0] - a; //set up first 2 index
        for (int i = 2; i < n; i++)
        {
            ans[i] = ans[i-2] + d[i]; //fill arr
        }
        for (int i = 1; i <= n; i++)
        {
            used[i] = 0; //set up a way to check non repeating
        }
        
        bool bad = 0; //flag
        for (int i = 0; i < n; i++)
        {
            if (used[ans[i]] || ans[i] <= 0 || ans[i] > n) { //conditions
                bad = 1;
                break;
            }
            used[ans[i]] = 1;
        }
        
        if (!bad) {
            for (int i = 0; i < n; i++)
            {
                cout << ans[i];
                if (i < n-1) cout << " ";
            }
            cout << endl;
            return 0;
        }
        
    }
    
    
    return 0; 
} 
