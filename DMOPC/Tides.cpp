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

int a[1003];
int main() 
{ 
    int n, minn = INT_MAX, maxx = INT_MIN; 
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] < minn) minn = a[i];
        if (a[i] > maxx) maxx = a[i];
    }
    int indexmin = 0, indexmax = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == minn) indexmin = i;
        if (a[i] == maxx) indexmax = i;
    }
    
    if (indexmin > indexmax) {
        cout << "unknown" << endl;
    }
    else {
        int previous = a[indexmin];
        for (int i = indexmin+1; i < indexmax+1; i++)
        {
            if (previous >= a[i]) {
                cout << "unknown" << endl;
                return 0;
            }
            previous = a[i];
        }
        cout << a[indexmax] - a[indexmin] << endl;
    }

    return 0;
} 
