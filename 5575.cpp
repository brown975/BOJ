#include <stdio.h>
int a[3][6];
int main() {
	for (int g = 0; g < 18; g++) {
		scanf("%d", &a[g / 6][g % 6]);
	}
	for (int g = 0; g < 3; g++) {
		a[g][2] = a[g][5] - a[g][2];
		a[g][1] = a[g][4] - a[g][1];
		a[g][0] = a[g][3] - a[g][0];
		if (a[g][2] < 0) {
			a[g][2] += 60;
			a[g][1]--;
		}
		if (a[g][1] < 0) {
			a[g][1] += 60;
			a[g][0]--;
		}
		printf("%d %d %d\n", a[g][0], a[g][1], a[g][2]);
	}
}
