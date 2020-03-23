#include <stdio.h>
#include <algorithm>
#include <functional>
using namespace std;
int a, s[55], d[55], f;
int main() {
	scanf("%d", &a);
	for (int g = 0; g < a; g++)
		scanf("%d", &s[g]);
	for (int g = 0; g < a; g++)
		scanf("%d", &d[g]);
	sort(s, s + a, greater<int>());
	sort(d, d + a);
	for (int g = 0; g < a; g++)
		f += s[g] * d[g];
	printf("%d", f);
}
