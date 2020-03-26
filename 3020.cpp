#include <stdio.h>
int a, s, d[500005], f[500005], e[500005], r = 1000000000, t = 0;
int main() {
    scanf("%d%d", &a, &s);
    for (int g = 1, c, v; g <= a / 2; g++) {
        scanf("%d%d", &c, &v);
        d[c]++;
        f[v]++;
    }
    for (int g = s; g; g--) {
        d[g] += d[g + 1];
        f[g] += f[g + 1];
    }
    for (int g = 1; g <= s; g++) {
        e[g] = d[g] + f[s - g + 1];
        if (e[g] < r)
            r = e[g];
    }
    for (int g = 1; g <= s; g++)
        if (e[g] == r)
            t++;
    printf("%d %d", r, t);
}
