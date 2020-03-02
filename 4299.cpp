#include <stdio.h>
using namespace std;
int a, s;
int main() {
	scanf("%d%d", &a, &s);
	if (((a + s) % 2) || (a < s)) {
		printf("-1");
		return 0;
	}
	printf("%d %d", (a + s) / 2, (a - s) / 2);
}
