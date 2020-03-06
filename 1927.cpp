#include <stdio.h>
#include <queue>
using namespace std;
priority_queue<int> a;
int s, d;
int main() {
	scanf("%d", &s);
	while (s--) {
		scanf("%d", &d);
		if (!d) {
			if (a.empty())
				printf("0\n");
			else {
				printf("%d\n", -a.top());
				a.pop();
			}
		}
		else
			a.push(-d);
	}
}
