#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
#include <cmath>
#include <set>
using namespace std;

#define ll long long
#define pb push_back
#define ull unsigned long long
#define pii pair<int, int>
#define mp make_pair
#define endl '\n'
#define vi vector<int>
#define f first
#define s second

set<int> s;
int main() 
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    for (int i = 0; i < 10; i++)
    {
        int x; cin >> x;
        int y = x%42;
        s.insert(y);
    }
    cout << s.size() << endl;
    

    
    return 0;
}
