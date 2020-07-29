#include <iostream>
#include <string>
using namespace std;
string d;
int main() {
	while (1) {
		getline(cin, d);
		if (d[0] == '*')
			if (d[1] == '*')
				if (d[2] == '*')
					if (!d[3])
						break;
		for (int g = d.size() - 1; g + 1; g--)
			printf("%c", d[g]);
		puts("");
	}
}
