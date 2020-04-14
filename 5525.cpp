#include <stdio.h>
int a, s, f;
char d[1000005];
int main() {
	scanf("%d%d%s", &a, &s, &d);
	for (int g = 0, e; g < s; g++) {
		if (d[g] == 'I' && d[g + 1] == 'O' && d[g + 2] == 'I') {
			e = 0;
			while (d[g] == 'I' && d[g + 1] == 'O') {
				g += 2;
				e++;
				if (d[g] == 'I' && e == a) {
					e--;
					f++;
				}
			}
		}
	}
	printf("%d", f);
}
