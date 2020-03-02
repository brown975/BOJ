#include <stdio.h>
#include <algorithm>
using namespace std;
int a[3];
int main() {
	for (int g = 0; g < 3; g++) {
		scanf("%d", &a[g]);
	}
	sort(a, a + 3);
	for (int g = 0; g < 3; g++) {
		printf("%d ", a[g]);
	}
}
