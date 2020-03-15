#include <stdio.h>
int a, s[1000], d[1000], f[1000], e;
int main() {
    scanf("%d", &a);
    for (int g = 0; g < a; g++)
        scanf("%d", &s[g]);
    for (int g = 0; g < a; g++) {
        d[g] = 1;
        for (int j = 0; j <= g; j++)
            if ((s[g] > s[j]) && (d[j] + 1 > d[g]))
                d[g] = d[j] + 1;
    }
    for (int g = a - 1; g >= 0; g--) {
        f[g] = 1;
        for (int j = a - 1; j >= g; j--)
            if ((s[g] > s[j]) && (f[j] + 1 > f[g]))
                f[g] = f[j] + 1;
    }
    e = d[0] + f[0];
    for (int g = 1; g < a; g++)
        if (e < d[g] + f[g])
            e = d[g] + f[g];
    printf("%d", e - 1);
}
