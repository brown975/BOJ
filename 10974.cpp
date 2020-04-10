#include <stdio.h>
#include <algorithm>
using namespace std;
int a, s[10005];
int main() {
	scanf("%d", &a);
	for (int g = 0; g < a; g++)
		s[g] = g + 1;
	do {
		for (int g = 0; g < a; g++)
			printf("%d ", s[g]);
		puts("");
	} while (next_permutation(s, s + a));
}
