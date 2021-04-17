#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cstring>
using namespace std;

string removeSpaces(string input)
{
  input.erase(remove(input.begin(),input.end(),' '),input.end());
  return input;
}

bool anagram(string n, string m) 
{
    sort(n.begin(), n.end());
    sort(m.begin(), m.end());
    for (int i = 0; i < n.length(); i++) {
        if (n[i] != m[i]) {
            return false;
        }
    }
    return true;
}

int main()  
{
    string n, m; 
    getline(cin, n);
    getline(cin, m);
    n = removeSpaces(n);
    m = removeSpaces(m);
    
    if(anagram(n, m))
        cout << "Is an anagram." << endl;
    else 
        cout << "Is not an anagram." << endl;
    return 0; 
}
