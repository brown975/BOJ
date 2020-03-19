#include <stdio.h>
int a, s, d[2002], f[2002][2002];
int main() {
    scanf("%d", &a);
    for (int g = 1; g <= a; g++)
        scanf("%d", &d[g]);
    scanf("%d", &s);
    for (int g = 1; g <= a; f[g][g + 1] = (d[g] == d[g + 1]), g++)
        f[g][g] = 1;
    for (int g = 3; g <= a; g++)
        for (int h = 1; h <= a - g + 1; h++)
            f[h][h + g - 1] = ((f[h + 1][h + g - 2]) & (d[h] == d[h + g - 1]));
    while (s--) {
        int e, r;
        scanf("%d%d", &e, &r);
        printf("%d\n", f[e][r]);
    }
}
