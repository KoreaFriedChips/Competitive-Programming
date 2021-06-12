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

int ans[105];
int main() 
{ 
    int n; cin >> n;
    string x; cin >> x;
    int count = 0, index = 0, defect = 0, size = 0;
    for (int i = 0; i < n; i++)
    {
        if (x[i] == 'O') count++;
        else if (x[i] == 'X') {
            if (count != 0) {
                ans[index] = count; 
                index++;
                size++;
                count = 0;
                defect++;
            }
        }
        if (i == n-1 && x[i] == 'O') {
            ans[index] = count; 
            size++;
        }
    }

    if (defect == n) {
        cout << 0 << endl;
    }
    else {
        cout << size << '\n';
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < ans[i]; j++) {
                cout << 'O';
            }
            cout << '\n';
        }
    }


        
    

    
    
    
    
    return 0; 
} 
