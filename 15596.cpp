#include <vector>
long long sum(std::vector<int>& a) {
	long long s = 0;
	for (int g = 0; g < a.size(); g++)
		s += a[g];
	return s;
}
