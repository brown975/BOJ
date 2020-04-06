#include <stdio.h>
int a, s, d[300005], f[300005], t[300005];
int asd(int e) {
    return d[e] = (d[e] - e) ? asd(d[e]) : e;
}
void asdf(int e, int r) {
    d[asd(e)] = asd(r);
}
int main() {
    scanf("%d%d", &a, &s);
    for (int g = 1; g <= s; g++)
        d[g] = g;
    for (int g = 1, q, w, e, r; g <= a; g++) {
        scanf("%d%d", &e, &r);
        w = asd(e);
        q = asd(r);
        if (!f[e]) {
            f[e] = 1;
            asdf(e, r);
        }
        else if (!f[r]) {
            f[r] = 1;
            asdf(r, e);
        }
        else if (!f[w]) {
            f[w] = 1;
            asdf(w, e);
            asdf(e, r);
        }
        else if (!f[q]) {
            f[q] = 1;
            asdf(q, r);
            asdf(r, e);
        }
        else
            t[g] = 1;
    }
    for (int g = 1; g <= a; g++)
        if (t[g])
            printf("SMECE\n");
        else
            printf("LADICA\n");
}
