#include <stdio.h>
char a[105], s;
int main() {
	scanf("%s", a);
	for (int g = 0; a[g]; g++)
		if (a[g] == 'a' || a[g] == 'i' || a[g] == 'o' || a[g] == 'e' || a[g] == 'u')
			s++;
	printf("%d", s);
}
