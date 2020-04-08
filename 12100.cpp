#include <bits/stdc++.h>
using namespace std;
int a, s[20][20];
int asdf(int e) {
	int v = 0;
	if (e == 5) {
		for (int g = 0; g < a; g++)
			for (int h = 0; h < a; h++)
				v = max(v, s[g][h]);
		return v;
	}
	for (int g = 0; g < 4; g++) {
		int d[20][20];
		for (int h = 0; h < a; h++)
			for (int j = 0; j < a; j++)
				d[h][j] = s[h][j];
		for (int h = 0; h < a; h++) {
			vector<int> f;
			for (int j = 0; j < a; j++)
				if ((g < 2 ? s[h][j] : s[j][h]) != 0)
					f.push_back(g < 2 ? s[h][j] : s[j][h]);
			if (g == 1 || g == 3)
				reverse(f.begin(), f.end());
			vector<int> t;
			for (int j = 0; j < f.size(); j++)
				if (j + 1 < f.size() && f[j] == f[j + 1]) {
					t.push_back(f[j] * 2);
					j++;
				}
				else
					t.push_back(f[j]);
			for (int j = t.size(); j < a; j++)
				t.push_back(0);
			if (g == 1 || g == 3)
				reverse(t.begin(), t.end());
			for (int j = 0; j < a; j++)
				(g < 2 ? s[h][j] : s[j][h]) = t[j];
		}
		v = max(v, asdf(e + 1));
		for (int h = 0; h < a; h++)
			for (int j = 0; j < a; j++)
				s[h][j] = d[h][j];
	}
	return v;
}
int main() {
	scanf("%d", &a);
	for (int g = 0; g < a; g++)
		for (int h = 0; h < a; h++)
			scanf("%d", &s[g][h]);
	printf("%d", asdf(0));
}
