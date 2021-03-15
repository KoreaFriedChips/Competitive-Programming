#include <iostream>
#include <algorithm>
#include <cstring>
#include <iomanip>
#include <vector>
using namespace std;

#define ll long long
#define pb push_back

int arr[105];
int main()
{
	int n; cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    int count = 0;
    //loop throug all possible (i, j)
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += arr[k]; 
            }
            //test for average flower
            for (int k = i; k <= j; k++)
            { //use multiplication to avoid overflow, don't do sum/(j-i+1)
                if (arr[k] * (j-i+1) == sum) { //(j-i+1) = length of subarr
                    count++;
                    break;
                }
            }
        }
    }
    cout << count << endl;

	return 0;
}
