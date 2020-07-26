#include <stdio.h>
char a, s;
int main() {
	for (int g = 0; g < 64; g++) {
		scanf("%c", &a);
		if(a=='\n')
			scanf("%c", &a);
		if (a == 'F' && (g % 8 + g / 8) % 2 == 0)
			s++;
	}
	printf("%d", s);
}
