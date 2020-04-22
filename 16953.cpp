#include <stdio.h>
int a, s, d;
int main() {
	scanf("%d%d", &a, &s);
	while (++d) {
		if (a == s)
			break;
		else if (s % 10 == 1)
			s /= 10;
		else if (!(s % 2))
			s /= 2;
		else
			d = -1;
		if (s < a)
			d = -1;
	}
	printf("%d", d ? d : -1);
}
