#include <stdio.h>
int a, s[10005];
void go(int e, int r) {
	if (e > r)
		return;
	int t = e, q = e, w = r;
	while (s[q] >= s[t])
		q++;
	while (s[w] > s[t])
		w--;
	go(q, w);
	go(w + 1, r);
	printf("%d\n", s[t]);
}
int main() {
	for (int e; scanf(" %d", &e) + 1;)
		s[a++] = e;
	go(0, a - 1);
}
