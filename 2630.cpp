#include <stdio.h>
long long a[3];
int f;
short q[2200][2200];
short asdf(int w, int e, int r) {
	short v = q[e][r];
	for (int g = e; g < e + w; g++) {
		for (int h = r; h < r + w; h++) {
			if (v - q[g][h]) {
				v = 2;
				break;
			}
		}
	}
	if (v == q[e][r])
		return v;
	a[asdf(w / 2, e, r)]++;
	a[asdf(w / 2, e, r + w / 2)]++;
	a[asdf(w / 2, e + w / 2, r)]++;
	a[asdf(w / 2, e + w / 2, r + w / 2)]++;
	return 2;
}
int main(void) {
	scanf("%d", &f);
	for (int g = 0; g < f; g++)
		for (int h = 0; h < f; h++)
			scanf("%hd", &q[g][h]);
	a[asdf(f, 0, 0) + 1]++;
	printf("%lld\n%lld", a[0], a[1]);
}
