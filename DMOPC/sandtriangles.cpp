//1122126d2a39
#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
#include <cmath>
#include <iomanip>
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
#define MAXN 1000000000

int psa[MAXN];
void prefix() {
    int id = 0, c = 1, j;
    for (int i = 1; i <= MAXN; i++)
    {
        for (j = c; j < c+i; j++)
        {
            psa[id] += j;
        }
        id++; c = j++;
    }
}

int main() 
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    prefix();
    int n; cin >> n;
    int row = int((-1+sqrt(1+8*n))/2);
    cout << psa[row] << endl;
    
    return 0;
}