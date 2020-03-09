#include <iostream>
#include <string.h>
using namespace std;
long long a, d, f=0;
char s[15];
long long asdf(int w) {
	if (w == 1)
		return 1;
	w--;
	return asdf(w) * 26 + 1;
}
int main(void) {
	cin >> a;
	cin >> s;
	d = strlen(s);
	for (int g = 0; g < d; g++)
	{
		f += (s[g] - 97) * asdf(a);
		a--;
	}
	f += d;
	cout << f;
}
