#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a, b, c, d, s;
    cin >> a >> b >> c >> d >> s;
    
    int nikky = 0; 
    int x = s%(a+b);
    if (x > a)
    {
        nikky += s/(a+b)*(a-b)+a-(x-a);
    } else {
        nikky += s/(a+b)*(a-b)+x;
    }
    int byron = 0;
    int y = s%(c+d);
    if (y > c)
    {
        byron += s/(c+d)*(c-d)+c-(y-c);
    } else {
        byron += s/(c+d)*(c-d)+y;
    }
    if (nikky > byron) {
        cout << "Nikky" <<endl;
    } else if (nikky == byron) {
        cout << "Tied" <<endl;
    } else {
        cout << "Byron" << endl;
    }
    

    
    

	return 0;
}