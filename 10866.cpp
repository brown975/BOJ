#include <stdio.h>
#include <deque>
using namespace std;
deque<int> a;
int s, f;
char d[9];
int main() {
	scanf("%d", &s);
	while (s--) {
		scanf("%s", d);
		if (d[0] == 'p') {
			if (d[1] == 'u') {
				if (d[5] == 'b') {
					scanf("%d", &f);
					a.push_back(f);
				}
				else {
					scanf("%d", &f);
					a.push_front(f);
				}
				continue;
			}
			else {
				if (d[4] == 'b') {
					if (a.empty())
						printf("-1");
					else {
						printf("%d", a.back());
						a.pop_back();
					}
				}
				else {
					if (a.empty())
						printf("-1");
					else {
						printf("%d", a.front());
						a.pop_front();
					}
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
