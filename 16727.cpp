#include <stdio.h>
int a, s, d, f;
int main() {
	scanf("%d%d%d%d", &a, &s, &d, &f);
	printf(a + f - s - d ? a + f > s + d ? "Persepolis" : "Esteghlal" : a > d ? "Esteghlal" : a < d ? "Persepolis" : "Penalty");
}
