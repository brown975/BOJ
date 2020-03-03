#include <cstdio>
using namespace std;
long long a, s, d[105] = { 0,1,1,1,2,2 };
int main(void) {
	scanf("%lld", &a);
	for (int g = 5; g < 105; g++)
		d[g] = (d[g - 1] + d[g - 5]);
	while (a--) {
		scanf("%lld", &s);
		printf("%lld\n", d[s]);
	}
}
