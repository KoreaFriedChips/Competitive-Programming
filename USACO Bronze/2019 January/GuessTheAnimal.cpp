#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <deque>
#include <unordered_map>
using namespace std;

#define ll long long
#define pb push_back
#define ull unsigned long long
#define pii pair<int, int>
#define mp make_pair
#define vi vector<int>
#define endl '\n'
#define MM 5000003

vector<string> v[10000];
int common(int i, int j) {
   int count = 0;
   vector<string> v1 = v[i];
   vector<string> v2 = v[j];
   for (int i = 0; i < v1.size(); i++) {
      for (int j = 0; j < v2.size(); j++) {
         if (v1[i] == v2[j])
            count++;
      }
   }
   return count;
}

int main() 
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    //freopen("guess.in", "r", stdin);
    //freopen("guess.out", "w", stdout);
    int n; cin >> n;
    string x; 
    for (int i  = 0; i < n; i++) {
        int y; cin >> x >> y;
        for (int j = 0; j < y; j++) {
            cin >> x;
            v[i].pb(x);
        }
    }
    int maxi = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j< n; j++) {
            maxi = max(maxi, common(i, j));
        }
    }
    cout << maxi+1 << endl;
    return 0;
}
