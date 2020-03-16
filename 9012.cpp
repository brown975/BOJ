#include <stdio.h>
int a;
char s[55];
int main() {
	scanf("%d", &a);
	while (a--) {
		scanf("%s", s);
		int d = 0;
		for (int g = 0; s[g]; g++) {
			if (s[g] == '(')
				d++;
			else
				d--;
			if (d < 0)
				break;
		}
		if (d)
			printf("NO");
		else
			printf("YES");
		puts("");
	}
}
