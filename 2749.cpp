#include <stdio.h>
using namespace std;
long long a;
int s[1500005] = { 0 };
int main(void) {
	scanf("%lld", &a);
	s[1] = 1;
	s[2] = 1;
	for (int g = 3; g <= 1500003; g++)
		s[g] = (s[g - 1] + s[g - 2]) % 1000000;
	printf("%d", s[a % 1500000]);
}
