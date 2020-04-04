#include <stdio.h>
int a, s, d[400005], f[400005];
void asf(int t, int e, int r) {
    if (f[t] % 2) {
        d[t] = (r - e + 1) - d[t];
        if (e - r) {
            f[2 * t] += f[t];
            f[2 * t + 1] += f[t];
        }
        f[t] = 0;
    }
}
void asd(int t, int e, int r, int q, int w) {
    asf(t, e, r);
    if (q > r || e > w)
        return;
    if (q <= e && r <= w) {
        d[t] = (r - e + 1) - d[t];
        if (e - r) {
            f[2 * t]++;
            f[2 * t + 1]++;
        }
        return;
    }
    asd(2 * t, e, (e + r) / 2, q, w);
    asd(2 * t + 1, (e + r) / 2 + 1, r, q, w);
    d[t] = d[2 * t] + d[2 * t + 1];
}
int asdf(int t, int e, int r, int q, int w) {
    asf(t, e, r);
    if (q > r || e > w)
        return 0;
    if (q <= e && r <= w)
        return d[t];
    return asdf(2 * t, e, (e + r) / 2, q, w) + asdf(2 * t + 1, (e + r) / 2 + 1, r, q, w);
}
int main() {
    scanf("%d%d", &a, &s);
    for (int g = 1, w, e, r; g <= s; g++) {
        scanf("%d%d%d", &w, &e, &r);
        if (!w)
            asd(1, 1, a, e, r);
        else
            printf("%d\n", asdf(1, 1, a, e, r));
    }
}
