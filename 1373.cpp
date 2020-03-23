#include <stdio.h>
char a[1000005] = { '0','0' };
int s;
int main() {
    scanf("%s", a + 2);
    while (a[s])
        a[s++] -= '0';
    for (int g = s % 3; g < s; g += 3)
        printf("%d", a[g] * 4 + a[g + 1] * 2 + a[g + 2]);
}
