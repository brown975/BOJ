#include <stdio.h>
int a, s, d = 0;
int main() {
	scanf("%d", &a);
	while (a--) {
		scanf("%d", &s);
		if (s)
			if (s % 2)
				d ^= s / 2 + 1;
			else
				d ^= s / 2 - 1;
	}
	if (d)
		printf("koosaga");
	else
		printf("cubelover");
}
