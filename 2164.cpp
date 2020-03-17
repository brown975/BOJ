#include <stdio.h>
#include <deque>
using namespace std;
deque<int> a;
int s;
int main() {
	scanf("%d", &s);
	while (s--)
		a.push_front(s+1);
	while (a.size() - 1) {
		a.pop_front();
		a.push_back(a.front());
		a.pop_front();
	}
	printf("%d", a.front());
}
