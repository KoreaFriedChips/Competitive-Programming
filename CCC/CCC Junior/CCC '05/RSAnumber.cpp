#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int start, end;
    cin >> start >> end;

    int multipleCount = 0;
    int count = 0;
    for (int i = start; i <= end; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i%j == 0){
                multipleCount += 1;
            }
        } 
        if (multipleCount == 4) {
            count += 1;
        }
        multipleCount = 0;
    }
    cout << "The number of RSA numbers between " << start << " and " << end << " is " << count << endl;
    return 0;
}