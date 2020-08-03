#include <stdio.h>
int a;
int main() {
	scanf("%d", &a);
	printf(a % 2 == 0 && a > 2 ? "YES" : "NO");
}
