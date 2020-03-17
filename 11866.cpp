#include <stdio.h>
#include <vector>
using namespace std;
vector<int> a;
int s, d, f;
int main() {
	scanf("%d%d", &s, &d);
	for (int g = 0; g < s; g++)
		a.push_back(g + 1);
	printf("<%d", a[f = (d - 1) % s]);
	a.erase(a.begin() + f);
	while (a.size()) {
		printf(", %d", a[f = (f + d - 1) % a.size()]);
		a.erase(a.begin() + f);
	}
	printf(">");
}
