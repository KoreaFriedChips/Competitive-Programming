#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int d, e, w;
    cin >> d >> e >> w;

    double planA = 0.0;
    if (d > 100) {
        planA += (d-100)*0.25;
    }
    planA += e*0.15;
    planA += w*0.2;
    
    double planB = 0.0;
    if (d > 250) {
        planB += (d-250)*0.45;
    }
    planB += e*0.35;
    planB += w*0.25;

    planA = round(planA*100.0)/100.0;
    planB = round(planB*100.0)/100.0;

    cout << "Plan A costs " << planA <<endl;
    cout << "Plan B costs " << planB << endl;
    if (planA < planB) {
        cout << "Plan A is cheapest." << endl;
    } else if (planA > planB) {
        cout << "Plan B is cheapest." << endl;
    }
    else {
        cout << "Plan A and B are the same price." << endl;
    }
    return 0;
}