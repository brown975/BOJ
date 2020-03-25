#include <stdio.h>
#include <algorithm>
using namespace std;
int a, s[1001], d[1001];
int main() {
	scanf("%d", &a);
	for (int g = 1; g <= a; g++)
		scanf("%d", &s[g]);
	for (int g = 1; g <= a; g++)
		for (int h = 1; h <= g; h++)
			d[g] = max(d[g], (d[g - h] + s[h]));
	printf("%d", d[a]);
}
