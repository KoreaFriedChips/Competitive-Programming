#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <queue>
#include <stack>
#include <deque>
using namespace std;

#define ll long long
#define pb push_back
#define ull unsigned long long
#define pii pair<int, int>
#define mp make_pair

int main() 
{ 
    int p, g, r, o; cin >> p >> g >> r >> o;
    int c; cin >> c;

    int count = 0, minimum = 10000000, least = 0;
    for (int i = 0; i <= c; i++)
    {
        for (int j = 0; j <= c; j++)
        {
            for (int k = 0; k <= c; k++)
            {
                for (int l = 0; l <= c; l++)
                {
                    if (i*p + j*g + k*r + l*o == c) {
                        if (least < minimum) {
                            least = i+j+k+l;
                            minimum = least;
                        }
                        cout << "# of PINK is " << i << " # of GREEN is " << j << " # of RED is " << k << " # of ORANGE is " << l;
                        cout << endl;
                        count++;
                    }
                }
            }
        }
    }
    cout << "Total combinations is " << count << ".";
    cout << endl;
    cout << "Minimum number of tickets to print is " << minimum << ".";
    cout << endl;

    
    return 0;
} 
