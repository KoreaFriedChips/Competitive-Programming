#include <iostream>
#include <algorithm>
#include <cstring>
#include <iomanip>
#include <unordered_map>
using namespace std;

#define ll long long
#define pb push_back

int main()
{
	ios_base::sync_with_stdio(false);
	unordered_map<string, string> text;
	text["CU"] = "see you";
	text[":-)"] = "I'm happy";
	text[":-("] = "I'm unhappy";
	text[";-)"] = "wink";
	text[":-P"] = "stick out my tongue";
	text["(~.~)"] = "sleepy";
	text["TA"] = "totally awesome";
	text["CCC"] = "Canadian Computing Competition";
	text["CUZ"] = "because";
	text["TY"] = "thank-you";
	text["YW"] = "you're welcome";
	text["-1"] = "-1";

    string message;
    while(cin >> message)
    {
        if (message == "TTYL") {
            cout <<"talk to you later" << endl;
            break;
        }
        else {
            unordered_map<string,string>::const_iterator ans = text.find(message);
            if (ans == text.end()) {
                cout << message << endl;
            }
            else {
                cout << ans->second << endl;
            }
        }

    }
	return 0;
}
