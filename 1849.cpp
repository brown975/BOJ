#include <stdio.h>
int a, s[400005], d[100005];
int asd(int t, int q, int w, int e, int r) {
    if (r < q || q < e)
        return s[t];
    if (e == r)
        return s[t] = w;
    return s[t] = asd(t * 2, q, w, e, (e + r) / 2) + asd(t * 2 + 1, q, w, (e + r) / 2 + 1, r);
}
int asf(int t, int w, int e, int r) {
    if (e == r)
        return e;
    if (s[t * 2] >= w)
        return asf(t * 2, w, e, (e + r) / 2);
    return asf(t * 2 + 1, w - s[t * 2], (e + r) / 2 + 1, r);
}
int main() {
    scanf("%d", &a);
    for (int g = 1; g <= a; g++)
        asd(1, g, 1, 1, a);
    for (int g = 1, f, e; g <= a; g++) {
        scanf("%d", &e);
        f = asf(1, e + 1, 1, a);
        d[f] = g;
        asd(1, f, 0, 1, a);
    }
    for (int g = 1; g <= a; g++)
        printf("%d\n", d[g]);
}
