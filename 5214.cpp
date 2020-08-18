#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int a, s, d, e, r[102005];
vector<int> f[102005];
queue<int> q;
int main() {
	cin >> a >> s >> d;
	for (int g = 0; g < d; g++) {
		for (int h = 0; h < s; h++) {
			cin >> e;
			f[e].push_back(g + a + 1);
			f[g + a + 1].push_back(e);
		}
	}
	q.push(1);
	r[1] = 5;
	while (q.size()) {
		for (int g : f[q.front()])
			if (!r[g]) {
				r[g] = r[q.front()] + 1;
				q.push(g);
			}
		q.pop();
	}
	cout << r[a] / 2 - 1;
}
