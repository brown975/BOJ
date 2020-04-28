#include <stdio.h>
int main() {
	for (int g = 2; g < 101; g++)
		for (int h = 2; h < g; h++)
			for (int j = h; g * g * g >= h * h * h + j * j * j; j++)
				for (int k = j; g * g * g >= h * h * h + j * j * j + k * k * k; k++)
					if (g * g * g == h * h * h + j * j * j + k * k * k && j - 2 && k - 2)
						printf("Cube = %d, Triple = (%d,%d,%d)\n", g, h, j, k);
}
