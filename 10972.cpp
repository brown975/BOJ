#include <stdio.h>
#include <algorithm>
using namespace std;
int a, s[10005];
int main() {
	scanf("%d", &a);
	for (int g = 0; g < a; g++)
		scanf("%d", &s[g]);
	if (next_permutation(s, s + a))
		for (int g = 0; g < a; g++)
			printf("%d ", s[g]);
	else
		printf("-1");
}
