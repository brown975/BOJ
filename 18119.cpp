#include<stdio.h>
int a, s, d[10000], f = 0xffffffff, e, t;
char r[10005];
int main() {
	scanf("%d%d", &a, &s);
	for (int g = 0; g < a; g++) {
		scanf("%s", r);
		for (int h = 0; r[h]; h++)
			d[g] |= 1 << (r[h] - 'a');
	}
	while (s--) {
		scanf("%d%s", &e, r);
		if (e == 1)
			f &= ~(1 << (r[0] - 'a'));
		else
			f |= (1 << (r[0] - 'a'));
		for (int g = t = 0; g < a; g++)
			if ((d[g] & f) == d[g])
				t++;
		printf("%d\n", t);
	}
}
