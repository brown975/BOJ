#include <stdio.h>
#include <string.h>
int a, s, d, f[200005], v[800005], y;
int asdf(int q, int w, int e, int r, int t) {
    if (r < q || q < e)
        return v[t];
    if (e == r)
        return v[t] = w;
    return v[t] = asdf(q, w, e, (e + r) / 2, t * 2) + asdf(q, w, (e + r) / 2 + 1, r, t * 2 + 1);
}
int asd(int q, int w, int e, int r, int t) {
    if (r < q || w < e)
        return 0;
    if (q <= e && r <= w)
        return v[t];
    return asd(q, w, e, (e + r) / 2, t * 2) + asd(q, w, (e + r) / 2 + 1, r, t * 2 + 1);
}
int main() {
    scanf("%d", &a);
    while (a--) {
        memset(f, 0, sizeof(f));
        memset(v, 0, sizeof(v));
        scanf("%d%d", &s, &d);
        for (int g = d + 1; g <= s + d; f[g - d] = g, g++)
            asdf(g, 1, 1, s + d, 1);
        y = d;
        for (int g = 0, e; g < d; g++) {
            scanf("%d", &e);
            printf("%d ", asd(1, f[e] - 1, 1, s + d, 1));
            asdf(f[e], 0, 1, s + d, 1);
            f[e] = y--;
            asdf(f[e], 1, 1, s + d, 1);
        }
        puts("");
    }
}
