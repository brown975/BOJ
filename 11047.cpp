#include <stdio.h>
int a, s, d[11], f = 0;
int main() {
    scanf("%d%d", &a, &s);
    for (int i = 0; i < a; i++)
        scanf("%d", &d[i]);
    for (int g = a - 1; g > -1; f += s / d[g], s %= d[g], g--);
    printf("%d", f);
}
