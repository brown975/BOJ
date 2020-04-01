#include <stdio.h>
#include <deque>
using namespace std;
int a, s;
deque<pair<int, int>> d;
int main() {
	scanf("%d%d", &a, &s);
	for (int g = 0, e; g < a; g++) {
		scanf("%d", &e);
		while (!d.empty() && d.back().first > e)
			d.pop_back();
		d.push_back({ e,g });
		while (g - d.front().second >= s)
			d.pop_front();
		printf("%d ", d.front().first);
	}
}
