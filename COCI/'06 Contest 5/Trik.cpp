#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
#include <unordered_map>
#include <queue>
using namespace std;

#define ll long long
#define pb push_back
#define ull unsigned long long
#define pii pair<int, int>
#define mp make_pair
#define vi vector<int>
#define endl '\n'
#define f first
#define s second

int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    int a[] = {0, 1, 0, 0};
    string x;
    cin >> x;
    for (int i = 0; i < x.length(); i++)
    {
        if (x[i] == 'A')
        {
            swap(a[1], a[2]);
        }
        else if (x[i] == 'B')
        {
            swap(a[2], a[3]);
        }
        else if (x[i] == 'C')
        {
            swap(a[1], a[3]);
        }
    }
    for (int i = 1; i < 4; i++)
    {
        if (a[i] == 1)
        {
            cout << i << endl;
            break;
        }
    }
    return 0;
}
