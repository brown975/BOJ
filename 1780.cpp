#include <stdio.h>
long long a[4];
short s[2200][2200];
int d;
short asdf(int w, int e, int r) {
	short v = s[e][r];
	for (int g = e; g < e + w; g++) {
		for (int h = r; h < r + w; h++) {
			if (v - s[g][h]) {
				v = 2;
				break;
			}
		}
	}
	if (v == s[e][r])
		return v;
	a[asdf(w / 3, e, r) + 1]++;
	a[asdf(w / 3, e, r + w / 3) + 1]++;
	a[asdf(w / 3, e, r + w / 3 * 2) + 1]++;
	a[asdf(w / 3, e + w / 3, r) + 1]++;
	a[asdf(w / 3, e + w / 3, r + w / 3) + 1]++;
	a[asdf(w / 3, e + w / 3, r + w / 3 * 2) + 1]++;
	a[asdf(w / 3, e + w / 3 * 2, r) + 1]++;
	a[asdf(w / 3, e + w / 3 * 2, r + w / 3) + 1]++;
	a[asdf(w / 3, e + w / 3 * 2, r + w / 3 * 2) + 1]++;
	return 2;
}
int main(void) {
	scanf("%d", &d);
	for (int g = 0; g < d; g++)
		for (int h = 0; h < d; h++)
			scanf("%hd", &s[g][h]);
	a[asdf(d, 0, 0) + 1]++;
	printf("%lld\n%lld\n%lld", a[0], a[1], a[2]);
}
