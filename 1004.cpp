#include <stdio.h>
int a, s;
int main() {
    scanf("%d", &a);
    for (int g = 0, d = 0, q, w, e, r; g < a; g++, d = 0) {
        scanf("%d%d%d%d%d", &q, &w, &e, &r, &s);
        for (int h = 0, c, v, x; h < s; h++) {
            scanf("%d%d%d", &c, &v, &x);
            if (((c - q) * (c - q) + (v - w) * (v - w) > x * x) != ((c - e) * (c - e) + (v - r) * (v - r) > x * x))
                d++;
        }
        printf("%d\n", d);
    }
}
