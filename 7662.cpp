#include <stdio.h>
#include <set>
using namespace std;
int a, s;
multiset<int> d;
int main() {
	scanf("%d", &a);
	while (a--) {
		scanf("%d", &s);
		while(s--) {
			int e;
			char r;
			scanf("\n%c%d", &r, &e);
			if (r == 'D') {
				if (d.size()) {
					if (e - 1)
						d.erase(d.begin());
					else
						d.erase(--d.end());
				}
			}
			else
				d.insert(e);
		}
		if (d.size())
			printf("%d %d\n", *--d.end(), *d.begin());
		else
			printf("EMPTY\n");
		d.clear();
	}
}
