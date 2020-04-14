#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int a, s;
pair<string, string> d[100005];
bool asdf(pair<string, string> e, pair<string, string> r) {
	if (e.first != r.first)
		return e.first < r.first;
	else
		return e.second < r.second;
}
int main() {
	scanf("%d%d", &a, &s);
	for (int g = 0; g < a; g++)
		cin >> d[g].first >> d[g].second;
	sort(d, d + a);
	for (int g = 0, e, r; g < s; g++) {
		string w;
		cin >> w;
		e = 0, r = a - 1;
		while (e <= r) {
			if (d[(e + r) / 2].first == w) {
				printf("%s\n", d[(e + r) / 2].second.c_str());
				break;
			}
			else if (d[(e + r) / 2].first < w)
				e = (e + r) / 2 + 1;
			else
				r = (e + r) / 2 - 1;
		}
	}
}
