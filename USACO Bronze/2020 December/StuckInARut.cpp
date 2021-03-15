#include <iostream>
#include <algorithm>
#include <cstring>
#include <iomanip>
#include <vector>
using namespace std;

#define ll long long
#define pb push_back

struct Cow //create a struct
{
    int x;
    int y;
    int index; //keep track of original index
};
Cow north[51];
Cow east[51];
int stop_dist[51];

bool CompareY(Cow p, Cow q)
{
    return p.y < q.y; //p will appear in front of q after sorted
}
bool CompareX(Cow p, Cow q)
{
    return p.x < q.x; //p will appear in front of q after sorted
}

int main()
{
	ios_base::sync_with_stdio(false);
	int n; cin >> n;
    int ec = 0, nc = 0;
    for (int i = 0; i < n; i++)
    {
        char d; cin >> d;
        if (d == 'E') {
            east[ec].index = i;
            cin >> east[ec].x >> east[ec].y; //access the x, y values from the cow struc
            ec++;
        } else {
            north[nc].index = i;
            cin >> north[nc].x >> north[nc].y; 
            nc++;
        }
    }
    
    sort(east, east+ec, CompareY); //special sorting for a struct using function
    sort(north, north+nc, CompareX); //sort by comparison function

    for (int i = 0; i < ec; i++) //loop through all the east cows
    {
        for (int j = 0; j < nc; j++) //all the pairs of north and east cows
        {
            if (stop_dist[north[j].index]) continue; //if north cow is greater than 0 meaning stopped cows
            if (north[j].x > east[i].x && north[j].y < east[i].y) {
                if (north[j].x - east[i].x > east[i].y - north[j].y) {//east cow will stop
                    stop_dist[east[i].index] = north[j].x - east[i].x; //amount of grass eaten before stopped
                    break;
                }
                else if (north[j].x - east[i].x < east[i].y - north[j].y) {
                    stop_dist[north[j].index] = east[i].y - north[j].y;
                }
            }
        }
    }
    //note no if statement for if they meet at the same time because they will both keep going
    for (int i = 0; i < n; i++)
    {
        if (stop_dist[i] == 0) cout << "Infinity\n";
        else cout << stop_dist[i] << endl;
    }
    
	return 0;
}
