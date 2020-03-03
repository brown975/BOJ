#include <stdio.h>
#include <algorithm>
using namespace std;
int a, s[1000005];
int main() {
	scanf("%d", &a);
	for (int g = 0; g < a; g++)
		scanf("%d", &s[g]);
	sort(s, s + a);
	for (int g = 0; g < a; g++) {
		printf("%d\n", s[g]);
	}
}
