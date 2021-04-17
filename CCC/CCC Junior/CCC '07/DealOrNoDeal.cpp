#include <iostream>
#include <algorithm>
#include <cstring>
#include <unordered_map>
#include <vector>
using namespace std;

#define ll long long
#define pb push_back

int main()
{
	ios_base::sync_with_stdio(false);
    unordered_map<int, double> price;
    price[1] = 100;
    price[2] = 500;
    price[3] = 1000;
    price[4] = 5000;
    price[5] = 10000;
    price[6] = 25000;
    price[7] = 50000;
    price[8] = 100000;
    price[9] = 500000;
    price[10] = 1000000;
    double total = 1691600;
	int n; cin >> n;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        unordered_map<int,double>::const_iterator ans = price.find(x);
        total -= ans->second;
    }

    int b; cin >> b;
    if (b > total/(10-n)) 
        cout << "deal" << endl;
    else 
        cout << "no deal" << endl;
    
	return 0;
}
