#include <stdio.h>
#include <algorithm>
using namespace std;
int a, s[55];
int main() {
	scanf("%d", &a);
	for (int g = 0; g < a; g++)
		scanf("%d", &s[g]);
	sort(s, s + a);
	printf("%d", s[0] * s[a - 1]);
}
