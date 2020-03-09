#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char a[105] = { 0 };
int s, d[26];
int main(void) {
	scanf("%s", &a);
	s = strlen(a);
	memset(d, -1, sizeof(d));
	while (s--)
		d[a[s] - 97] = s;
	for (int g = 0; g < 26; g++)
		printf("%d ", d[g]);
}
