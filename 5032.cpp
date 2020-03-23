#include <stdio.h>
int a, s, d, f;
int main() {
	scanf("%d%d%d", &a, &s, &d);
	a += s;
	while (1) {
		a -= d;
		if (a < 0)
			break;
		a++;
		f++;
	}
	printf("%d", f);
}
