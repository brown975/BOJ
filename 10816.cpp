#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
int a, s, f;
int main(){
	scanf("%d", &a);
	vector<int> d(a);
	for (int g = 0; g < a; g++)
		scanf("%d", &d[g]);
	sort(d.begin(), d.end());
	scanf("%d", &s);
	for (int g = 0; g < s; g++) {
		scanf("%d", &f);
		printf("%d ", upper_bound(d.begin(), d.end(), f) - lower_bound(d.begin(), d.end(), f));
	}
}
