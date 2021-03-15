#include <iostream>
#include <vector>
using namespace std;

#define ll long long
#define pb push_back

int main()
{
   int n; cin >> n;
   char ans[n]; char sol[n];
   for (int i = 0; i < n; i++)
   {
       cin >> ans[i];
   }
   for (int i = 0; i < n; i++)
   {
       cin >> sol[i];
   }
   int count = 0;
   for (int i = 0; i < n; i++) {
       if (ans[i] == sol[i]) {
           count++;
        }
   }
   
   cout << count << endl;

	return 0;
}