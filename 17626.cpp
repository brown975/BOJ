#include <stdio.h>
#include <algorithm>
using namespace std;
int a, s = 5;
int main() {
	scanf("%d", &a);
	for (int g = 1; g * g <= a; g++) {
		for (int h = 1; h * h <= a - g * g; h++) {
			for (int j = 1; j * j <= a - h * h - g * g; j++) {
				for (int k = 1; k * k <= a - j * j - h * h - g * g; k++)
					if (g * g + h * h + j * j + k * k == a)
						s = min(s, 4);
				if (g * g + h * h + j * j == a)
					s = min(s, 3);
			}
			if (g * g + h * h == a)
				s = min(s, 2);
		}
		if (g * g == a)
			s = 1;
	}
	printf("%d", s);
}
