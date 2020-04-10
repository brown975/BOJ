#include <stdio.h>
#include <algorithm>
using namespace std;
int a, s[50];
int main() {
	scanf("%d", &a);
	for (int g = 0, e, r; g < a; s[g + 1] = max(s[g + 1], s[g]), s[g + e] = max(s[g + e], s[g] + r), g++)
		scanf("%d%d", &e, &r);
	printf("%d", s[a]);
}
