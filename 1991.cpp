#include <stdio.h>
#include <vector>
using namespace std;
int a;
vector<vector<char>> s;
void asdf(char e, int r) {
	if (e == '.')
		return;
	if (r == -1)
		printf("%c", e);
	asdf(s[e - 65][0], r);
	if (!r)
		printf("%c", e);
	asdf(s[e - 65][1], r);
	if (r == 1)
		printf("%c", e);
}
int main() {
	scanf("%d", &a);
	s.resize(a);
	for (int g = 0; g < a; g++) {
		char w, e, r;
		scanf("\n%c %c %c", &w, &e, &r);
		s[w - 65].push_back(e);
		s[w - 65].push_back(r);
	}
	asdf(65, -1);
	puts("");
	asdf(65, 0);
	puts("");
	asdf(65, 1);
}
