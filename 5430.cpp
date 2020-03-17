#include <stdio.h>
#include <deque>
using namespace std;
int a, s;
int main() {
	scanf("%d", &a);
	while (a--) {
		char f[100005];
		auto e = true, r = false;
		scanf("%s", f);
		scanf("%d", &s);
		scanf("\n[");
		deque<int> d(s);
		for (int g = 0; g < s; g++) {
			if (g == s - 1) {
				scanf("%d", &d[g]);
			}
			else {
				scanf("%d,", &d[g]);
			}
		}
		scanf("]");
		for (int g = 0; f[g]; g++) {
			if (f[g] == 'R')
				e = !e;
			else {
				if (d.empty()) {
					r = true;
					break;
				}
				if (e)
					d.pop_front();
				else
					d.pop_back();
			}
		}
		if (r) {
			printf("error\n");
			continue;
		}
		printf("[");
		if (e) {
			for (int g = 0; g < d.size(); g++) {
				if (g == d.size() - 1)
					printf("%d", d[g]);
				else
					printf("%d,", d[g]);
			}
		}
		else {
			for (int g = d.size() - 1; g > -1; g--) {
				if (!g)
					printf("%d", d[g]);
				else
					printf("%d,", d[g]);
			}
		}
		puts("]");
	}
}
