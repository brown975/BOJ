#include <stdio.h>
int s[100005][3], d, f[100005][3];
short a[100005][3];
int max(int w, int e) {
	return(w > e) ? w : e;
}
int min(int w, int e) {
	return(w < e) ? w : e;
}
int main() {
	scanf("%d", &d);
	for (int g = 0; g < d; g++)
		for (int h = 0; h < 3; h++)
			scanf("%hd", &a[g][h]);
	s[0][0] = f[0][0] = a[0][0];
	s[0][1] = f[0][1] = a[0][1];
	s[0][2] = f[0][2] = a[0][2];
	for (int g = 1; g <= d; g++) {
		s[g][0] = max(s[g - 1][0], s[g - 1][1]) + a[g][0];
		s[g][1] = max(s[g][0] - a[g][0], s[g - 1][2]) + a[g][1];
		s[g][2] = max(s[g - 1][1], s[g - 1][2]) + a[g][2];
		f[g][0] = min(f[g - 1][0], f[g - 1][1]) + a[g][0];
		f[g][1] = min(f[g][0] - a[g][0], f[g - 1][2]) + a[g][1];
		f[g][2] = min(f[g - 1][1], f[g - 1][2]) + a[g][2];
	}
	printf("%d %d", s[d][1] - a[d][1], f[d][1] - a[d][1]);
}
