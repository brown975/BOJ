#include <stdio.h>
#include <algorithm>
using namespace std;
int a[9], s, d, f;
int main() {
	for (int g = 0; g < 9; s += a[g], g++)
		scanf("%d", &a[g]);
	sort(a, a + 9);
	for (int g = 0; g < 9; g++)
		for (int h = g + 1; h < 9; h++)
			if (s - a[g] - a[h] == 100) {
				for (int j = 0; j < 9; j++)
					if (j - g && j - h)
						printf("%d\n", a[j]);
				return 0;
			}
}
