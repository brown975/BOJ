#include <stdio.h>
int a, s, d, f, e, r;
int main() {
	scanf("%d", &e);
	while (e--) {
		r = 1;
		scanf("%d%d%d%d", &a, &s, &d, &f);
		for (int i = 0; i < a; i++)
			if (!((s * i + f - d) % a)) {
				printf("%d\n", i * s + f);
				r = 0;
				break;
			}
		if (r)
			printf("-1\n");
	}
}
