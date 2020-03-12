#include <stdio.h>
#include <string.h>
char a[105];
int d, f = 0;
int main() {
	scanf("%d", &d);
	while (d--) {
		bool s[26] = { 0 };
		scanf("%s", a);
		for (int g = 1; g < strlen(a); g++) {
			if (s[a[g] - 97]) {
				f--;
				break;
			}
			if (a[g] != a[g - 1])
				s[a[g - 1] - 97] = true;
		}
		f++;
	}
	printf("%d", f);
}
