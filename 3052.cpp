#include <stdio.h>
int a, s[42], d;
int main() {
	for (int g = 0; g < 10; g++) {
		scanf("%d", &a);
		s[a % 42]++;
		if (s[a % 42] == 1)
			d++;
	}
	printf("%d", d);
}
