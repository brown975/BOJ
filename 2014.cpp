#include <stdio.h>
#include <vector>
#include <queue>
using namespace std;
int a, s, d[100], v = -1, e;
priority_queue<int> w;
int main() {
	scanf("%d%d", &a, &s);
	for (int g = 0; g < a; g++) {
		scanf("%d", &d[g]);
		w.push(-d[g]);
	}
	for (int g = 0; g < s - 1; g++) {
		e = -w.top();
		w.pop();
		for (int h = 0; h < a; h++) {
			long long r = 1LL * e * d[h];
			if (r < (1LL << 31))
				w.push(-r);
			else
				break;
		}
		v = e;
		while (v == -w.top())
			w.pop();
	}
	printf("%d", -w.top());
}
