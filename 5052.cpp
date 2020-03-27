#include <string>
#include <iostream>
#include <algorithm>
using namespace std;
int a, s;
string d[10005];
bool asdf(string e, string r) {
	if (e.size() >= r.size())
		return false;
	for (int g = 0; g < e.size(); g++)
		if (e[g] - r[g])
			return false;
	return true;
}
int main() {
	cin >> a;
	while (a--) {
		cin >> s;
		for (int g = 0; g < s; g++)
			cin >> d[g];
		sort(d, d + s);
		bool f = true;
		for (int g = 0; g < s - 1; g++)
			if (asdf(d[g], d[g + 1])) {
				f = false;
				break;
			}
		if (f)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}
