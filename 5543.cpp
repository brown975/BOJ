#include <stdio.h>
using namespace std;
int a, s, d, f, g;
int min(int e, int r) {
	return (e < r) ? e : r;
}
int main() {
	scanf("%d%d%d%d%d", &a, &s, &d, &f, &g);
	printf("%d", min(a, min(s, d)) + min(f, g) - 50);
}
