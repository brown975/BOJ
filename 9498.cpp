#include <stdio.h>
int a, s;
int main(void) {
	scanf("%d", &a);
	printf((a > 89) ? "A" : (a > 79) ? "B" : (a > 69) ? "C" : (a > 59) ? "D" : "F");
}
