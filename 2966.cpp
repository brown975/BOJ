#include <stdio.h>
int a, w, e, r;
char s;
int main() {
	scanf("%d\n", &a);
	for (int g = 0; g < a; g++) {
		scanf("%c", &s);
		if ((g % 6 == 0 || g % 6 == 1) && s == 'C')
			r++;
		else if ((g % 6 == 3 || g % 6 == 2) && s == 'A')
			r++;
		else if ((g % 6 == 4 || g % 6 == 5) && s == 'B')
			r++;
		if ((g % 4 == 0 || g % 4 == 2) && s == 'B')
			e++;
		else if (g % 4 == 1 && s == 'A')
			e++;
		else if (g % 4 == 3 && s == 'C')
			e++;
		if (g % 3 == 0 && s == 'A')
			w++;
		else if (g % 3 == 1 && s == 'B')
			w++;
		else if (g % 3 == 2 && s == 'C')
			w++;
	}
	printf("%d\n", (w > e ? w : e) > r ? w > e ? w : e : r);
	if (w >= r && w >= e)
		puts("Adrian");
	if (e >= r && e >= w)
		puts("Bruno");
	if (r >= w && r >= e)
		puts("Goran");
}
