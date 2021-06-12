#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <set>
#include <iomanip>
#include <set>
using namespace std;

#define ll long long
#define pb push_back
#define ull unsigned long long
#define pii pair<int, int>
#define mp make_pair
#define row first
#define col second

bool sortcol(vector<int> v1, vector<int> v2 ) { 
    return v1[0] < v2[0]; 
} 

int a[200005][25];
vector< vector<int> > v;
set<pii> s;
int main() 
{
   int m, n, k; cin >> m >> n >> k;
   for (int i = 0; i < m; i++)
   {
       vector<int> v1;
       for (int j = 0; j < n; j++)
       {
           int x; cin >> x;
            v1.pb(x);
       }
       v.pb(v1);
   }

   sort(v.begin(), v.end(), sortcol);
   
   /*for (int i = 1; i <= m; i++)
   {
       for (int j = 1; j <= n; j++)
       {
           cout << a[i][j] << " ";
       }
       cout << endl;
   }*/

    int count = 0;
   for (int i = 0; i < m; i++)
   {
       for (int j = 0; j < n; j++)
       {
           for (int l = 0; l < n; l++)
           {
                int x = v[i][j+1] - v[i][j];
                int y = v[i+1][j+1] - v[i+1][j];
                if (x == y && abs(v[i+1][j+1]-v[i][j+1]) == k && abs(v[i+1][j+1]-v[i][j])) {
                    count++;
                }
           }
       }
   }

   cout << count << endl;

   
   
   
   return 0;
}