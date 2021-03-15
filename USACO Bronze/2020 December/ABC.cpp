#include <iostream>
#include <algorithm>
#include <iomanip>
#include <vector>
#include <cmath>
using namespace std;

int main()  
{
    int x[7];
    for (int i = 0; i < 7; i++)
    {
        cin >> x[i];
    }
    sort(x, x+7);
    cout << x[0] << " " << x[1] << " " << x[6]-x[1]-x[0] << endl;
    return 0; 
}
