#include <stdio.h>
int a, s, d[501], f[6001][3];
int main() {
    scanf("%d%d", &a, &s);
    for (int g = 1, w, e, r; g <= s; g++) {
        scanf("%d%d%d", &w, &e, &r);
        f[g][0] = w;
        f[g][1] = e;
        f[g][2] = r;
    }
    d[1] = 0;
    for (int g = 2; g <= a; g++)
        d[g] = 2000000000;
    for (int g = 1; g <= a - 1; g++)
        for (int h = 1; h <= s; h++)
            if (d[f[h][0]] - 2000000000) {
                int t = d[f[h][0]] + f[h][2];
                if (d[f[h][1]] > t)
                    d[f[h][1]] = t;
            }
    for (int g = 1; g <= s; g++)
        if (d[f[g][0]] - 2000000000 && d[f[g][1]] > d[f[g][0]] + f[g][2]) {
            printf("-1");
            return 0;
        }
    for (int g = 2; g <= a; g++)
        printf("%d\n", (d[g] - 2000000000) ? d[g] : -1);
}
