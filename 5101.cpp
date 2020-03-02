#include <stdio.h>
using namespace std;
int a, s, d;
int main() {
	while (1) {
		scanf("%d%d%d", &a, &s, &d);
		if (!a && !s && !d)
			break;
		if (((d - a) % s) || (d - a) * s < 0) {
			printf("X\n");
			continue;
		}
		printf("%d\n", (d - a) / s + 1);
	}
}
