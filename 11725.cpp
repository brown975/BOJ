#include <stdio.h>
#include <vector>
using namespace std;
int a, s[100005], f[100005];
vector<int> d[100005];
void asdf(int e) {
	for (int g : d[e])
		if (!f[g]) {
			f[g] = 1;
			s[g] = e;
			asdf(g);
		}
}
int main() {
	scanf("%d", &a);
	for (int g = 1, e, r; g < a; g++) {
		scanf("%d%d", &e, &r);
		d[e].push_back(r);
		d[r].push_back(e);
	}
	asdf(1);
	for (int g = 2; g <= a; g++)
		printf("%d\n", s[g]);
}
