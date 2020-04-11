#include <stdio.h>
int main() {
	char a[9];
	int s = 0;
	sprintf(a, "%x", new int);
	for (int g = 0; g < 8; g++)
		s = (s + a[g]) % 2;
	printf(s ? "Yonsei" : "Korea");
}
