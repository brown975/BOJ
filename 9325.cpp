#include <stdio.h>
int a, s, d, e, r;
int main() {
	scanf("%d", &a);
	while(a--) {
		scanf("%d%d", &s, &d);
		while (d--) {
			scanf("%d%d", &e, &r);
			s += e * r;
		}
		printf("%d\n", s);
	}
}
