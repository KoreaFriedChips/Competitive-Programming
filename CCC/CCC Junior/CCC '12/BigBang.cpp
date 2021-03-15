#include <iostream>
#include <vector>
using namespace std;

#define ll long long
#define pb push_back

int main()
{
    //𝑆=3𝑃+𝐾 
    string lex = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string rev = "ZYXWVUTSRQPONMLKJIHGFEDCBA";
    int n; cin >> n;
    string str;
    cin >> str;
    for (int i = 0; i < str.size(); i++)
    {
        int index = lex.find(str[i]);
        char code;
        index = index - n - 3*(i+1);
        if (index < 0) {
            code = rev[-1*index-1];
        } else {
            code = lex[index];
        }
        cout << code;
    }
    cout << endl;

	return 0;
}