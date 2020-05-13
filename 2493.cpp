#include <stdio.h>
#include <stack>
using namespace std;
int a;
stack<pair<int, int>> s;
int main() {
	scanf("%d", &a);
	for (int g = 0, e, r = 1; g < a; g++) {
		scanf("%d", &e);
		while (s.size()) {
			pair<int, int> w = s.top();
			if (w.second < e)
				s.pop();
			else {
				r = 0;
				printf("%d ", w.first);
				break;
			}
		}
		s.push({ g + 1, e });
		if (r)
			printf("0 ");
		r = 1;
	}
}
