#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstring>
#include <queue>
using namespace std;

#define ll long long
#define pb push_back
#define ull unsigned long long
#define pii pair<int, int>
#define mp make_pair
#define vi vector<int>
#define endl '\n'
#define MM 51

vector<pii> v;
int main() 
{
   cin.sync_with_stdio(0);
   cin.tie(0);
   freopen("cowqueue.in", "r", stdin);
   freopen("cowqueue.out", "w", stdout);
   int n; cin >> n;
   for (int i =0; i < n; i++) {
      int x, y; cin >> x >> y;
      v.pb(mp(x, y));
   }
   sort(v.begin(), v.end());

   int time = 0;
   queue<pii> q;
   for (int i = 0; i < n; i++) {
      q.push(v[i]);
   }
   time += q.front().first;
   time += q.front().second;
   q.pop();
   while (!q.empty()) {
      if (time >= q.front().first) {
         time += q.front().second;
         q.pop();
      } else {
         time++;
      }
   }
   cout << time << endl;
   return 0;
}
