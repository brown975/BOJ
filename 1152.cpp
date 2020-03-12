#include <iostream>
#include <string>
using namespace std;
string a;
int s = 0;
int main() {
	getline(cin, a);
	for (int g = 0; g < a.length(); g++) {
		if (a[g] == ' ')
			s++;
	}
	if (a[0] == ' ')
		s--;
	if (a[a.length() - 1] == ' ')
		s--;
	cout << s + 1;
}
