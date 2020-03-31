#include <stdio.h>
int a, s, d[100005], f[400005];
int asd(int w, int t, int e, int r) {
    if (w < e || r < w)
        return f[t];
    if (e == r)
        return f[t] = e;
    int c = asd(w, t * 2, e, (e + r) / 2), v = asd(w, t * 2 + 1, (e + r) / 2 + 1, r);
    if (c == -1 && v == -1)
        return -1;
    if (c == -1)
        return f[t] = v;
    if (v == -1)
        return f[t] = c;
    if (d[c] <= d[v])
        return f[t] = c;
    return f[t] = v;
}
int asf(int q, int w, int t, int e, int r) {
    if (r < q || w < e)
        return -1;
    if (q <= e && r <= w)
        return f[t];
    int c = asf(q, w, t * 2, e, (e + r) / 2), v = asf(q, w, t * 2 + 1, (e + r) / 2 + 1, r);
    if (c == -1)
        return v;
    if (v == -1)
        return c;
    if (d[c] <= d[v])
        return c;
    return v;
}
int main() {
    scanf("%d", &a);
    for (int g = 1; g <= a; g++)
        scanf("%d", &d[g]);
    for (int g = 1; g <= a; g++)
        asd(g, 1, 1, a);
    scanf("%d", &s);
    for (int g = 0, w, e, r; g < s; g++) {
        scanf("%d%d%d", &w, &e, &r);
        if (w == 1) {
            d[e] = r;
            asd(e, 1, 1, a);
        }
        else
            printf("%d\n", asf(e, r, 1, 1, a));
    }
}
