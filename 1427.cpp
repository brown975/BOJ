#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <functional>
using namespace std;
int g = 0;
char a[15];
int main(void) {
	memset(a, 10, sizeof(a));
	do {
		scanf("%c", &a[g]);
	} while (a[g++] - '\n');
	sort(a, a + 13, greater<int>());
	for (g = 0; g < 13; g++) {
		if (a[g] == 10)
			continue;
		printf("%c", a[g]);
	}
}	
