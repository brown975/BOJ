#include <stdio.h>
int a, s, d[1001][1001];
int main() {
    scanf("%d%d", &a, &s);
    for (int g = 1; g <= a; g++)
        d[g][0] = 1;
    for (int g = 1; g <= a; g++)
        d[g][1] = g;
    for (int g = 2; g <= a; g++)
        for (int h = 2; h <= a; h++)
            d[g][h] = (d[g - 2][h - 1] + d[g - 1][h]) % 1000000003;
    printf("%d", (d[a - 3][s - 1] + d[a - 1][s]) % 1000000003);
}
