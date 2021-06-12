#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <set>
#include <iomanip>
#include <set>
using namespace std;

#define ll long long
#define pb push_back
#define ull unsigned long long
#define pii pair<int, int>
#define mp make_pair
#define endl '\n'
#define row first
#define col second

char s[200003];
int Q, x, y, z, len , psa[2][200003];
int main() 
{
    scanf("%s", s+1);
    for (int i = 1; s[i]; len++, i++)
    {
        psa[s[i]-'0'][i]++;
        psa[0][i] += psa[0][i-1];
        psa[1][i] += psa[1][i-1];
    }
    scanf("%d", &Q);
    for(int q=0; q<Q; q++){
        scanf("%d %d %d", &x, &y, &z);
        int t = lower_bound(psa[z]+x, psa[z]+len+1, psa[z][x-1]+y) - psa[z];
        if(t > len) printf("-1\n");
        else printf("%d\n", t);
    }

   return 0;
}