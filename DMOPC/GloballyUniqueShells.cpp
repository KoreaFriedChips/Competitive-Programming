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


int r[1000005];
int main() 
{ 
    int n; cin >> n;
    int a, b; cin >> a >> b;
    int x; 
    for (int i = 1; i <= a; i++)
    {
        cin >> x;
        r[x]++;
    }
    int count = 0;
    for (int i = 1; i <= b; i++)
    {
        cin >> x;
        if (r[x] == 1) count++;
    }

    cout << n-count << endl;
    
    return 0;
} 
