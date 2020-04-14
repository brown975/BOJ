#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <map>
using namespace std;
int a, s;
string d[100005];
map<string, int> f;
char e[30];
int main() {
	scanf("%d%d", &a, &s);
	for (int g = 1; g <= a; g++) {
		scanf("%s", e);
		d[g] = e;
		f[e] = g;
	}
	while (s--) {
		scanf("%s", e);
		if (e[0] > 47 && e[0] < 58)
			printf("%s\n", d[atoi(e)].c_str());
		else
			printf("%d\n", f[e]);
	}
}
