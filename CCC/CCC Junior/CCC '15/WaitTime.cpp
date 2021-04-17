#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
#include <cmath>
#include <queue>
#include <string>
#include <bitset>
#include <deque>
using namespace std;

#define ll long long
#define pb push_back
#define ull unsigned long long
#define pii pair<int, int>
#define mp make_pair
#define vi vector<int>
#define endl '\n'
#define MOD 1000000007
#define MM 53
#define row first
#define col second

vector<int> ans(101);
vector<int> reply(101);
vector<int> send(101);
int main() 
{
   cin.sync_with_stdio(0);
   cin.tie(0);
   int m; cin >> m;
   char c; int time = 0, x;
   for (int i = 0; i < m; i++) {
      cin >> c >> x;
      if (c == 'S') {
         ans[x] += time-send[x];
         reply[x] = 1;
      } else if (c == 'W') {
         time += x - 2;
      } else if (c == 'R') {
         reply[x] = -1;
         send[x] = time;
      }
      time++;
   }
   
   
   for (int i = 0; i < 101; i++) {
      if (reply[i] != 0) {
         if (reply[i] > 0) {
            cout << i << " " << ans[i] << endl;
         } else {
            cout << i << " " << reply[i] << endl;
         }
      }
   }
   return 0;
}