#include <stdio.h>
char a[105], s, d[27];
int main() {
	while (1) {
		scanf("\n%[^\n]s", a);
		if (a[0] == '#')
			if (!a[1])
				break;
		for (int g = 0; a[g]; g++)
			d[a[g] < 91 && a[g] > 64 ? a[g] - 65 : a[g] < 123 && a[g] > 96 ? a[g] - 97 : 26]++;
		for (int g = 0; g < 26; g++)
			s += !!d[g];
		printf("%d\n", s);
		for (int g = 0; g < 26; g++)
			s = d[g] = 0;
	}
}
