#include <stdio.h>
#include <string.h>
#include <string>
#include <iostream>
#include <vector>
using namespace std;
int d[1000005], c, v;
string a, s;
vector<int> f;
int main() {
	getline(cin, a);
	c = a.size();
	getline(cin, s);
	v = s.size();
	for (int g = 1, h = 0; g < v; g++) {
		while (h && s[g] - s[h])
			h = d[h - 1];
		if (s[g] == s[h])
			d[g] = ++h;
	}
	for (int g = 0, h = 0; g < c; g++) {
		while (h && a[g] - s[h])
			h = d[h - 1];
		if (a[g] == s[h]) {
			if (h == v - 1) {
				f.push_back(g - v + 2);
				h = d[h];
			}
			else
				++h;
		}
	}
	printf("%d\n", f.size());
	for (auto g : f)
		printf("%d ", g);
}
