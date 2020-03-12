#include <stdio.h>
int a, s = 0;
int main() {
	scanf("%d", &a);
	while ((a % 3) || (a >= 15)) {
		a -= 5;
		s++;
		if (a < 0) {
			s = 0;
			a = 0;
			break;
		}
	}
	if (s + a / 3 == 0)
		printf("-1");
	else
		printf("%d", s + a / 3);
}
