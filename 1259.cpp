#include <stdio.h>
#include <string.h>
char a[9];
int main() {
	while (scanf("%s", a)) {
		int s = strlen(a);
		if (s == 1 && a[0] == '0')
			break;
		if (s == 1)
			printf("yes\n");
		else if (s == 2 && a[0] == a[1])
			printf("yes\n");
		else if (s == 3 && a[0] == a[2])
			printf("yes\n");
		else if (s == 4 && a[0] == a[3] && a[1] == a[2])
			printf("yes\n");
		else if (s == 5 && a[0] == a[4] && a[1] == a[3])
			printf("yes\n");
		else
			printf("no\n");
	}
}
