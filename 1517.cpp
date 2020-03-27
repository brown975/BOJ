#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
int a, s[500005];
long long t = 0;
void asdf(int w, int e, int r) {
	vector<int> q;
	int g = 0, h = 0, c = e - w, v = r - e;
	while ((g < c) && (h < v)) {
		if (s[w + g] > s[e + h]) {
			t += c - g;
			q.push_back(s[e + h++]);
		}
		else
			q.push_back(s[w + g++]);
	}
	while (g < c)
		q.push_back(s[w + g++]);
	while (h < v)
		q.push_back(s[e + h++]);
	for (int g = w; g < r; g++)
		s[g] = q[g - w];
}
void asd(int e, int r) {
	if (r == e + 1)
		return;
	if (r == e + 2) {
		if (s[e] > s[e + 1]) {
			t++;
			swap(s[e], s[e + 1]);
		}
		return;
	}
	asd(e, (e + r) / 2);
	asd((e + r) / 2 , r);
	asdf(e, (e + r) / 2 , r);
}
int main() {
	scanf("%d", &a);
	for (int g = 0; g < a; g++)
		scanf("%d", &s[g]);
	asd(0, a);
	printf("%lld", t);
}
