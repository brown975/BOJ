#include <stdio.h>
#include <string.h>
char a[10005], s[10005];
int d, f, q, w, e, r, t[10005];
int main() {
	scanf("%s%s", a, s);
	d = strlen(a);
	f = strlen(s);
	while (d || f || q) {
		if (d)
			e = a[--d] - '0';
		if (f)
			r = s[--f] - '0';
		t[w++] = (e + r + q) % 10;
		q = (e + r + q > 9) ? 1 : 0;
		e = r = 0;
	}
	for (int g = w - 1; g + 1; g--)
		printf("%d", t[g]);
}
