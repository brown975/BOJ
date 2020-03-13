#include <cstdio>
#include <algorithm>
using namespace std;
int a, s, d[51][51];
char num;
int asdf(int w, int e, int r) {
	int q = 0;
	for (int g = w; g < w + 8; g++) {
		for (int h = e; h < e + 8; h++) {
			if (!(h % 2) && d[g][h] - r)
				q++;
			else if ((h % 2) && d[g][h] - !r)
				q++;
		}
		r = !r;
	}
	return q;
}
int main(void) {
	scanf("%d %d", &a, &s);
	for (int g = 0; g < a; g++) {
		for (int h = 0; h < s; h++) {
			scanf(" %c", &num);
			if (num - 'W')
				d[g][h] = 1;
			else 
				d[g][h] = 0;
		}
	}
	int q = 9999;
	for (int g = 0; g < a - 7; g++) {
		for (int h = 0; h < s - 7; h++) {
			q = min(q, asdf(g, h, 0));
			q = min(q, asdf(g, h, 1));
		}
	}
	printf("%d", q);
}
