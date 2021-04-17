#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long

int main()
{
    int a = 0, b = 0, in, v;
    char d, dd; bool quit = false;
    while (!quit)
    {
        cin >> in;
        switch(in) {
            case 1:
                cin >> d >> v;
                if (d == 'A') {
                    a = v;
                } else {
                    b = v;
                }
                break;
            case 2:
                cin >> d;
                cout << ((d == 'B')? b : a) << endl;
                break;
            case 3:
                cin >> d >> dd;
                if (d == 'A') {
                    a = a + ((dd == 'B')? b : a);
                } else {
                    b = b + ((dd == 'B')? b : a);
                }
                break;
            case 4:
                cin >> d >> dd;
                if (d == 'A') {
                    a = a*((dd == 'B')? b : a);
                } else {
                    b = b*((dd == 'B')? b : a);
                }
                break;
            case 5:
                cin >> d >> dd;
                if (d == 'A') {
                    a = a - ((dd == 'B')? b : a);
                } else {
                    b = b - ((dd == 'B')? b : a);
                }
                break;
            case 6:
                cin >> d >> dd;
                if (d == 'A') {
                    a = a/((dd == 'B')? b : a);
                } else {
                    b = b/((dd == 'B')? b : a);
                }
                break;
            case 7:
                quit = true;
                break;
        }
    }
	return 0;
}