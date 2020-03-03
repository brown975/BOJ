#include <stdio.h>
using namespace std;
int a, s, d, f, g;
int main() {
	scanf("%d%d%d%d%d", &a, &s, &d, &f, &g);
	printf("%d", a - (((s - 1) / f > (d - 1) / g) ? (s - 1) / f : (d - 1) / g) - 1);
}
