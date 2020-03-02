#include <stdio.h>
int a, s;
int main(void) {
	scanf("%d%d", &a, &s);
	printf((a > s) ? ">" : (a < s) ? "<" : "==");
}
