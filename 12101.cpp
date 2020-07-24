#include <stdio.h>
#include <string>
using namespace std;
int a, s, d[12] = { 0, 1, 2, 4 };
string f;
string asdf(int e, int r) {
	if (e == 1)
		return "1";
	if (e == 2)
		return r - 2 ? "1+1" : "2";
	if (e == 3)
		return r - 1 ? r - 2 ? r - 3 ? "3" : "2+1" : "1+2" : "1+1+1";
	if (r <= d[e - 1])
		return "1+" + asdf(e - 1, r);
	if (r <= d[e - 1] + d[e - 2])
		return "2+" + asdf(e - 2, r - d[e - 1]);
	else
		return "3+" + asdf(e - 3, r - d[e - 1] - d[e - 2]);
}
int main() {
	scanf("%d%d", &a, &s);
	for (int g = 4; g <= a; g++)
		d[g] = d[g - 1] + d[g - 2] + d[g - 3];
	puts(s > d[a] ? "-1" : asdf(a, s).c_str());
}
