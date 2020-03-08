#include <stdio.h>
using namespace std;
long long a, s[95] = { 0 };
int main(void) {
	scanf("%lld", &a);
	s[1] = 1;
	s[2] = 1;
	for (int g = 3; g <= 90; g++)
		s[g] = s[g - 1] + s[g - 2];
	printf("%lld", s[a]);
}
