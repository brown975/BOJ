#include <stdio.h>
int a, s[70][70];
char d[5000];
void asdf(int w, int e, int r) {
	short v = s[e][r];
	for (int g = e; g < e + w; g++) {
		for (int h = r; h < r + w; h++) {
			if (s[e][r] - s[g][h]) {
				printf("(");
				asdf(w / 2, e, r);
				asdf(w / 2, e, r + w / 2);
				asdf(w / 2, e + w / 2, r);
				asdf(w / 2, e + w / 2, r + w / 2);
				printf(")");
				return;
			}
		}
	}
	printf("%d", v);
}
int main() {
	scanf("%d", &a);
	for (int g = 0; g < a; g++)
		for (int h = 0; h < a; h++)
			scanf("%1d", &s[g][h]);
	asdf(a, 0, 0);
}
