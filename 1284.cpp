#include <iostream>
#include <string>
using namespace std;
string a;
int main() {
	while (1) {
		cin >> a;
		int s = 0;
		if (a.size() == 1 && a[0] == '0')
			break;
		for (int g = 0; g < a.size(); g++, s += 3) {
			if (a[g] == '0')
				s++;
			if (a[g] == '1')
				s--;
		}
		printf("%d\n", s + a.size() + 1);
	}
}
