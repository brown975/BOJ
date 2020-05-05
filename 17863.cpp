#include <stdio.h>
int a;
int main() {
	scanf("%d", &a);
	printf(a / 10000 == 555 ? "YES" : "NO");
}
