#include <iostream>
using namespace std;

int main()
{
    int spreaders, rateOfSpread, targetPopulation;
    int nonSpreaders = 0;
    int day = 0;

    cin>>targetPopulation;
    cin>>spreaders;
    cin>>rateOfSpread;

    while (spreaders+nonSpreaders <= targetPopulation)
    {
        day++;
        nonSpreaders += spreaders;
        spreaders *= rateOfSpread;
    }
    cout<<day<<endl;
}