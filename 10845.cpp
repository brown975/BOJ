#include <stdio.h>
#include <queue>
using namespace std;
queue<int> a;
int s, f;
char d[9];
int main() {
	scanf("%d", &s);
	while (s--) {
		scanf("%s", d);
		if (d[0] == 'p') {
			if (d[1] == 'u') {
				scanf("%d", &f);
				a.push(f);
				continue;
			}
			else {
				if (a.empty())
					printf("-1");
				else {
					printf("%d", a.front());
					a.pop();
				}
			}
		}
		else if (d[0] == 's')
			printf("%d", a.size());
		else if (d[0] == 'e')
			printf("%d", a.empty());
		else if (d[0] == 'f')
			if (a.empty())
				printf("-1");
			else
				printf("%d", a.front());
		else if (d[0] == 'b')
			if (a.empty())
				printf("-1");
			else
				printf("%d", a.back());
		puts("");
	}
}
