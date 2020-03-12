#include <stdio.h>
#include <algorithm>
using namespace std;
int a[3];
int main() {
	while (1) {
		scanf("%d%d%d", &a[0], &a[1], &a[2]);
		sort(a, a + 3);
		if (!a[0] & !a[1] & !a[2])
			break;
		if (a[0] * a[0] + a[1] * a[1] == a[2] * a[2])
			printf("right\n");
		else
			printf("wrong\n");
	}
}
