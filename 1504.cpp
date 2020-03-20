#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
int a, s;
int main() {
	scanf("%d%d", &a, &s);
	vector<vector<int>> q(a, vector<int>(a, 10000000));
	int w, e, r;
	for (int g = 0; g < s; g++) {
		scanf("%d%d%d", &w, &e, &r);
		w--;
		e--;
		q[w][e] = r;
		q[e][w] = r;
	}
	for (int g = 0; g < a; g++)
		q[g][g] = 0;
	for (int j = 0; j < a; j++) {
		for (int g = 0; g < a; g++) {
			for (int h = 0; h < a; h++) {
				q[g][h] = min(q[g][h], q[g][j] + q[j][h]);
			}
		}
	}
	scanf("%d%d", &w, &e);
	w--;
	e--;
	int t = min(q[0][w] + q[w][e] + q[e][a - 1], q[0][e] + q[e][w] + q[w][a - 1]);
	if (t > 10000000)
		t = -1;
	printf("%d", t);
}
