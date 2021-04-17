#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
#include <cmath>
#include <queue>
#include <string>
using namespace std;

#define ll long long
#define pb push_back
#define ull unsigned long long
#define pii pair<int, int>
#define mp make_pair
#define vi vector<int>
#define endl '\n'

int dp[250][250];
int pi(int n, int k)
{
   if (n < 0 || (n != 0 && k == 0)) 
      return 0;
   if (n == 0 && k != 0) 
      return 1;
   if (dp[n][k] != 0) 
      return dp[n][k];
   return dp[n][k] = pi(n, k-1) + pi(n-k, k);
}
int main() 
{
   cin.sync_with_stdio(0);
   cin.tie(0);
   int n, k; cin >> n >> k;
   cout << pi(n-k, k) << endl;
   
   return 0;
}