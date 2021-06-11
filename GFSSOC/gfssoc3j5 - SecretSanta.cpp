#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <climits>
#include <cmath>
#include <set>
#include <iomanip>
using namespace std;

#define ll long long
#define pb push_back
#define ull unsigned long long
#define endl '\n'
#define pii pair<int, int>
#define pis pair<int, string>
#define vi vector<int>
#define mp make_pair
#define MM 5003

int f[10], w[10], a[7];
int s = 0, stress, weight, lvl, ans = INT_MAX;
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> f[i] >> w[i];
        a[i] = i;  //used to permute all combinations of travel
        s += w[i]; //total weight
    }
    do
    {
        stress = 0, weight = s, lvl = 101; //start on the roof
        for (int i = 0; i < n; i++)
        {
            stress += weight * (abs(lvl - f[a[i]]) + 1); //add onto stress, +1 for throwing time
            weight -= w[a[i]];                           //get rid of weight
            lvl = f[a[i]];                               //now on floor f[a[i]]
        }
        ans = min(ans, stress);
    } while (next_permutation(a, a + n)); //go through all permutations (n <= 7)
    cout << ans << endl;
    return 0;
}
