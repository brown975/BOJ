#include <stdio.h>
#include <queue>
#include <math.h>
using namespace std;
priority_queue<pair<int, int>> a;
int s, d;
int main() {
	scanf("%d", &s);
	while (s--) {
		scanf("%d", &d);
		if (!d) {
			if (a.empty())
				printf("0\n");
			else {
				printf("%d\n", a.top().first * a.top().second);
				a.pop();
			}
		}
		else
			a.push({ -abs(d), -d / abs(d) });
	}
}
