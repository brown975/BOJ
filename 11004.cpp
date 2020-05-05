#include <stdio.h>
#include <algorithm>
using namespace std;
int a, s, d[5000005];
int main() {
	scanf("%d%d", &a, &s);
	for (int g = 0; g < a; g++)
		scanf("%d", &d[g]);
	nth_element(d, d + --s, d + a);
	printf("%d", d[s]);
}
