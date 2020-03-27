#include <stdio.h>
#include <queue>
using namespace std;
int a;
priority_queue<int> s;
int main() {
	scanf("%d", &a);
	for (int g = 0, d; g < a * a; g++) {
		scanf("%d", &d);
		s.push(-d);
		if (s.size() > a)
			s.pop();
	}
	printf("%d", -s.top());
}
