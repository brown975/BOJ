#include <stdio.h>
long long a, s, d[501], f[6001][3];
int main() {
    scanf("%lld%lld", &a, &s);
    for (long long g = 1, w, e, r; g <= s; g++) {
        scanf("%lld%lld%lld", &w, &e, &r);
        f[g][0] = w;
        f[g][1] = e;
        f[g][2] = r;
    }
    d[1] = 0;
    for (long long g = 2; g <= a; g++)
        d[g] = 2000000000;
    for (long long g = 1; g <= a - 1; g++)
        for (long long h = 1, t; h <= s; h++)
            if (d[f[h][0]] - 2000000000) {
                t = d[f[h][0]] + f[h][2];
                if (d[f[h][1]] > t)
                    d[f[h][1]] = t;
            }
    for (long long g = 1; g <= s; g++)
        if (d[f[g][0]] - 2000000000 && d[f[g][1]] > d[f[g][0]] + f[g][2]) {
            printf("-1");
            return 0;
        }
    for (long long g = 2; g <= a; g++) {
        printf("%lld", (d[g] - 2000000000) ? d[g] : -1);
        if (g - a)
            puts("");
    }
}
