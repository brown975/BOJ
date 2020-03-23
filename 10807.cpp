#include <stdio.h>
int a, s[205], d;
int main() {
	scanf("%d", &a);
	while (a--) {
		scanf("%d", &d);
		s[d + 100]++;
	}
	scanf("%d", &d);
	printf("%d", s[d + 100]);
}
