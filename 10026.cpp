#include <stdio.h>
#include <string.h>
using namespace std;
int a, t[105][105], d = 0, f = 0;
char s[105][105], w;
void dfs(int e, int r) {
	t[e][r] = true;
	if ((e < a) && !t[e + 1][r] && (s[e][r] == s[e + 1][r]))
		dfs(e + 1, r);
	if ((r < a) && !t[e][r + 1] && (s[e][r] == s[e][r + 1]))
		dfs(e, r + 1);
	if (e && !t[e - 1][r] && (s[e][r] == s[e - 1][r]))
		dfs(e - 1, r);
	if (r && !t[e][r - 1] && (s[e][r] == s[e][r - 1]))
		dfs(e, r - 1);
}
int main() {
	scanf("%d", &a);
	for (int g = 1; g <= a; g++)
		scanf("%s", s[g] + 1);
	for (int g = 1; g <= a; g++)
		for (int h = 1; h <= a; h++)
			if (!t[g][h]) {
				dfs(g, h);
				d++;
			}
	memset(t, false, sizeof(t));
	for (int g = 1; g <= a; g++)
		for (int h = 1; h <= a; h++)
			if (s[g][h] == 'R')
				s[g][h] = 'G';
	for (int g = 1; g <= a; g++)
		for (int h = 1; h <= a; h++)
			if (!t[g][h]) {
				dfs(g, h);
				f++;
			}
	printf("%d %d", d, f);
}
