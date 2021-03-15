#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <deque>
#include <string>
using namespace std;

#define ll long long
#define pb push_back
#define ull unsigned long long
#define pii pair<int, int>
#define mp make_pair
#define vi vector<int>
#define endl '\n'
#define MM 5000003

struct Rec {
    public:
    int x1, y1, x2, y2;
};

int cover_area(Rec a, Rec b) 
{
    int x = max(0, min(a.x2, b.x2)) - max(a.x1, b.x1);
    int y = max(0, min(a.y2, b.y2)) - max(a.y1, b.y1);
    return x*y;
}
int area(Rec x) {
    return (x.x2 - x.x1)*(x.y2-x.y1);
}

int main()
{
    //freopen("billboard.in", "r", stdin);
    //freopen("billboard.out", "w", stdout);
    Rec a, b, t;
    cin >> a.x1 >> a.y1 >> a.x2 >> a.y2;
    cin >> b.x1 >> b.y1 >> b.x2 >> b.y2;
    cin >> t.x1 >> t.y1 >> t.x2 >> t.y2;

    cout << area(a)+area(b)-cover_area(a, t) - cover_area(b, t) << endl;


    return 0;
}