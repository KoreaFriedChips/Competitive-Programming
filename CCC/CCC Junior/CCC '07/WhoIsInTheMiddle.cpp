#include <iostream>
#include <algorithm>
#include <cstring>
#include <iomanip>
#include <unordered_map>
using namespace std;

#define ll long long
#define pb push_back

int main()
{
	ios_base::sync_with_stdio(false);
	int arr[3];
	for (int i = 0; i < 3; i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr+3);
	cout << arr[1] << endl;

	return 0;
}
