#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <climits>
#include <string>
#include <set>
using namespace std;

#define ll long long
#define pb push_back
#define ull unsigned long long

long long findDigits(int n) 
{ 
    // factorial of -ve number  
    // doesn't exists 
    if (n < 0) 
        return 0; 
  
    // base case 
    if (n <= 1) 
        return 1; 
  
    // Use Kamenetsky formula to calculate 
    // the number of digits 
    double x = ((n * log10(n / M_E) +  
                 log10(2 * M_PI * n) / 
                 2.0)); 
  
    return floor(x) + 1; 
}

int main() 
{ 
    cin.sync_with_stdio(0);
    cin.tie(0);
    int n;
    while (cin >> n)
    {
        cout << "The length of " << n << "! is " << findDigits(n) << '\n';
    }
    

    return 0; 
} 
