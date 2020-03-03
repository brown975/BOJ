#include <stdio.h>
#include <string.h>
int a;
char s[105];
char d[27] = "yhesocvxduiglbkrztnwjpfmaq";
int main() {
	scanf("%d\n", &a);
	for (int g = 0; g < a; g++) {
		char s[105];
		scanf("%[^\n]%*c", s);
		for (int h = 0; h < strlen(s); h++) {
			if (s[h] == ' ')
				continue;
			s[h] = d[(int)s[h] - 97];
		}
		printf("Case #%d: %s\n", g + 1, s);
	}
}
