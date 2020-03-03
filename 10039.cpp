#include <stdio.h>
int a[5], s;
int main() {
	for (int g = 0; g < 5; g++) {
		scanf("%d", &a[g]);
		if (a[g] < 40)
			a[g] = 40;
		s += a[g];
	}
	printf("%d", s / 5);
}
