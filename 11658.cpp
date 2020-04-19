#include <stdio.h>
int a, s, d[1030][1030];
int sum(int e, int r) {
    int t = 0;
    for (int g = e; g > 0; g -= (g & -g))
        for (int h = r; h > 0; h -= (h & -h))
            t += d[g][h];
    return t;
}
void update(int e, int r, int t) {
    for (int g = e; g <= a; g += (g & -g))
        for (int h = r; h <= a; h += (h & -h))
            d[g][h] += t;
}
int main() {
    scanf("%d%d", &a, &s);
    for (int g = 1, e; g <= a; g++)
        for (int h = 1; h <= a; update(g, h, e), h++)
            scanf("%d", &e);
    for (int g = 0, t, q, w, e, r; g < s; g++) {
        scanf("%d", &t);
        if (!t) {
            scanf("%d%d%d", &w, &e, &r);
            update(w, e, r - sum(w, e) + sum(w - 1, e) + sum(w, e - 1) - sum(w - 1, e - 1));
        }
        else {
            scanf("%d%d%d%d", &q, &w, &e, &r);
            printf("%d\n", sum(e, r) - sum(q - 1, r) - sum(e, w - 1) + sum(q - 1, w - 1));
        }
    }
}
