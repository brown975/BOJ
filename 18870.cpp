#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
int a;
vector<int> s, d;
int main() {
	scanf("%d", &a);
	for (int g = 0, e; g < a; s.push_back(e), d.push_back(e), g++)
		scanf("%d", &e);
	sort(d.begin(), d.end());
	d.erase(unique(d.begin(), d.end()), d.end());
	for (auto g : s)
		printf("%d ", lower_bound(d.begin(), d.end(), g) - d.begin());
}
