//1122126d2a39
#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
#include <cmath>
#include <string>
using namespace std;

#define ll long long
#define pb push_back
#define ull unsigned long long
#define pii pair<int, int>
#define mp make_pair
#define endl '\n'
#define vi vector<int>
#define f first
#define s second

int main() 
{
    int x;
    while (cin >> x)
    {
        int y = sqrt(x);
        int count = 0;
        for (int i = 2; i <= y; i++)
        {
            if (x%i == 0) {
                count++;
            }
            while (x % i == 0)
            {
                x /= i;
            } 
        }
        if (x != 1) {
            count++;
        }

        if (count == 3) cout << "valid" << endl;
        else cout << "not" << endl;
    }
    
    return 0;
}