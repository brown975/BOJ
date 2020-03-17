#include <stdio.h>
long long e[6][6], s[6][6], d[6][6], f, w;
void asdf(long long e[6][6], long long r[6][6]) {
    for (int g = 1; g <= f; g++) {
        for (int h = 1; h <= f; h++) {
            d[g][h] = 0;
            for (int j = 1; j <= f; j++) {
                d[g][h] += e[g][j] * r[j][h];
            }
            d[g][h] %= 1000;
        }
    }
    for (int g = 1; g <= f; g++)
        for (int h = 1; h <= f; h++)
            e[g][h] = d[g][h];
}
int main() {
    scanf("%lld%lld", &f, &w);
    for (int g = 1; g <= f; g++) {
        for (int h = 1; h <= f; h++)
            scanf("%lld", &e[g][h]);
        s[g][g] = 1;
    }
    while (w) {
        if (w % 2)
            asdf(s, e);
        asdf(e, e);
        w /= 2;
    }
    for (int g = 1; g <= f; g++, puts(""))
        for (int h = 1; h <= f; h++)
            printf("%lld ", s[g][h]);
}
