#include <stdio.h>
int a, s, d;
int main(void) {
	scanf("%d%d%d", &a, &s, &d);
	printf("%d", (a >= s) ? (s >= d) ? s : (a >= d) ? d : a : (s < d) ? s : (a >= d) ? a : d);
}
