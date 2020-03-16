#include <stdio.h>
#include <stack>
using namespace std;
int a, s, f = 0;
stack<int> d;
int main() {
	scanf("%d", &a);
	while (a--) {
		scanf("%d", &s);
		if (!s) {
			f -= d.top();
			d.pop();
		}
		else {
			f += s;
			d.push(s);
		}
	}
	printf("%d", f);
}
