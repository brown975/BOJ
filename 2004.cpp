#include <stdio.h>
#include <algorithm>
using namespace std;
int a, s;
int asdf(int w, int e) {
	int r = 0;
	while (w) {
		w /= e ? 2 : 5;
		r += w;
	}
	return r;
}
int main() {
	scanf("%d %d", &a, &s);
	printf("%d", min(asdf(a, 1) - asdf(s, 1) - asdf(a - s, 1), asdf(a, 0) - asdf(s, 0) - asdf(a - s, 0)));
}
