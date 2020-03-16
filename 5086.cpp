#include <stdio.h>
int a, s;
int main() {
	do {
		scanf("%d%d", &a, &s);
		if (!a & !s)
			break;
		if (!(a % s))
			printf("multiple");
		else if (!(s % a))
			printf("factor");
		else
			printf("neither");
        puts("");
	} while (1);
}
