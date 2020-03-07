#include <cstdio>
using namespace std;
char a[1100][2100] = { 0 };
int s, d, f;
void asdf(int w, int e, int r) {
	if (w == 1) {
		a[e][r] = '*';
		return;
	}
	s = (2 << w) - 3;
	d = (1 << w) - 1;
	if (w % 2) {
		for (int g = 0; g < s; g++)
			a[e + d - 1][r + g] = '*';
		for (int g = 0; g < d - 1; g++)
			a[e + g][r + s / 2 - g] = a[e + g][r + s / 2 + g] = '*';
		asdf(w - 1, e + d / 2, r + (1 << (w - 1)));
	}
	else {
		for (int g = 0; g < s; g++)
			a[e][r + g] = '*';
		for (int g = 1; g < d; g++)
			a[e + g][r + g] = a[e + g][r + s - g - 1] = '*';
		asdf(w - 1, e + 1, r + (1 << (w - 1)));
	}
}

int main() {
	scanf("%d", &f);
	asdf(f, 0, 0);
	int s = (2 << f) - 3;
	int d = (1 << f) - 1;
	for (int g = 0; g < d; g++) {
		for (int h = 0; h < (f % 2 ? s - d + g + 1 : s - g); h++)
			printf("%c", (a[g][h] == '*') ? '*' : ' ');
		printf("\n");
	}
}
