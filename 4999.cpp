#include <stdio.h>
#include <string.h>
char a[1005], s[1005];
int main() {
	scanf("%s%s", a, s);
	if (strlen(a) < strlen(s))
		printf("no");
	else
		printf("go");
}
