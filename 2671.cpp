#include <iostream>
#include <regex>
using namespace std;
string s;
int main() {
	cin >> s;
	cout << (regex_match(s, regex("(100+1+|01)+")) ? "SUBMARINE" : "NOISE");
}
