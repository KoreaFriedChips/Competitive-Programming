#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <deque>
#include <string>
using namespace std;

#define ll long long
#define pb push_back
#define ull unsigned long long
#define pii pair<int, int>
#define mp make_pair
#define vi vector<int>
#define endl '\n'
#define MM 103

int a[MM];
int order[MM];
int original[MM];
int main()
{
    freopen("shuffle.in", "r", stdin);
    freopen("shuffle.out", "w", stdout);
    int n; cin >> n;
    for (int i =1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++) {
        cin >> order[i];
    }
    for (int i =0; i < 3; i++) { //perform the 3 shuffles
        for (int j = 1; j <= n; j++) 
            original[j] = order[a[j]]; //original is temp arr holding the shuffled arr
        for (int j = 1; j <= n; j++) {
            order[j] = original[j];
        }
    }

    for (int i = 1; i <= n; i++) {
        cout << order[i] << endl;
    }

    return 0;
}