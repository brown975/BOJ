#include <stdio.h>
#include <string>
using namespace std;
int a, s, d[10005][3] = { 0,0,0,1,0,0,1,1,0,1,1,1 };
int main() {
	scanf("%d", &a);
	for (int g = 4; g <= 10000; g++) {
		d[g][0] = d[g - 1][0];
		d[g][1] = d[g - 2][0] + d[g - 2][1];
		d[g][2] = d[g - 3][0] + d[g - 3][1] + d[g - 3][2];
	}
	while (a--) {
		scanf("%d", &s);
		printf("%d\n", d[s][0] + d[s][1] + d[s][2]);
	}
}
