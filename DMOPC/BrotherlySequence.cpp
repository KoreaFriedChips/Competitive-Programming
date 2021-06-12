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
#define MAXN 1000000003

int a[101];
int main() 
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int count = 1, ans = 0;
    for (int i = 1; i < n; i++)
    {
        if (abs(a[i-1]-a[i]) <= 2 && abs(a[i]-a[i-1]) <= 2) {
            count++;
        } else {
            ans = max(ans, count);
            count = 1;
        }
    }
    ans = max(ans, count);
    
    cout << ans << endl;
    
    
    return 0;
}