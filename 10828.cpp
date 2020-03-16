#include <stdio.h>
#include <stack>
using namespace std;
int a, d;
char s[8];
stack<int> f;
int main() {
	scanf("%d", &a);
	while (a--) {
		scanf("%s", s);
		if (s[0] == 'p') {
			if (s[1] == 'u') {
				scanf("%d", &d);
				f.push(d);
				continue;
			}
			else {
				if (f.empty())
					printf("-1");
				else {
					printf("%d", f.top());
					f.pop();
				}
			}
		}
		if (s[0] == 's')
			printf("%d", f.size());
		if (s[0] == 'e')
			printf("%d", f.empty());
		if (s[0] == 't')
			if (f.empty())
				printf("-1");
			else
				printf("%d", f.top());
		puts("");
	}
}
