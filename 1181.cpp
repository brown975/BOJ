#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string a[20005];
int s;
bool least(string e, string r) {
	int q = e.length(), w = r.length();
	if (q - w)
		return q < w;
	else
		return e < r;
}
int main(void) {
	scanf("%d", &s);
	for (int g = 0; g < s; g++)
		cin >> a[g];
	sort(a, a + s, least);
	for (int g = 0; g < s; g++) {
		if (a[g] == a[g + 1])
			continue;
		cout << a[g] << '\n';
	}
}
