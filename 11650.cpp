#include <stdio.h>
#include <algorithm>
using namespace std;
pair<int, int> a[100005];
int s;
int main(void) {
	scanf("%d", &s);
	for (int g = 0; g < s; g++)
		scanf("%d%d", &a[g].first, &a[g].second);
	sort(a, a + s);
	for (int g = 0; g < s; g++)
		printf("%d %d\n", a[g].first, a[g].second);
}
