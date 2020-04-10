#include <cstdio>
int a[11], s[4], d;
int z = -1000000000, x = 1000000000;
void asdf(int c, int v, int q, int w, int e, int r) {
    if (c == d) {
        if (v > z)
            z = v;
        if (v < x)
            x = v;
        return;
    }
    if (q)
        asdf(c + 1, v + a[c], q - 1, w, e, r);
    if (w)
        asdf(c + 1, v - a[c], q, w - 1, e, r);
    if (e)
        asdf(c + 1, v * a[c], q, w, e - 1, r);
    if (r)
        asdf(c + 1, v / a[c], q, w, e, r - 1);
}
int main() {
    scanf("%d", &d);
    for (int g = 0; g < d; g++)
        scanf("%d", &a[g]);
    for (int g = 0; g < 4; g++)
        scanf("%d", &s[g]);
    asdf(1, a[0], s[0], s[1], s[2], s[3]);
    printf("%d\n%d", z, x);
}
