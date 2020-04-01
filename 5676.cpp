#include <stdio.h>
#include <algorithm>
using namespace std;
int a, s, d[400005];
int asd(int t, int q, int w, int e, int r) {
    if (r < q || q < e)
        return d[t];
    if (e == r)
        return d[t] = w;
    return d[t] = asd(t * 2, q, w, e, (e + r) / 2) * asd(t * 2 + 1, q, w, (e + r) / 2 + 1, r);
}
int asf(int t, int q, int w, int e, int r) {
    if (r < q || w < e)
        return 1;
    if (q <= e && r <= w)
        return d[t];
    return asf(t * 2, q, w, e, (e + r) / 2) * asf(t * 2 + 1, q, w, (e + r) / 2 + 1, r);
}
int main() {
    while (scanf("%d%d", &a, &s) + 1) {
        for (int g = 1, e; g <= a; g++) {
            scanf("%d", &e);
            if (e > 0)
                asd(1, g, 1, 1, a);
            else if (!e)
                asd(1, g, 0, 1, a);
            else
                asd(1, g, -1, 1, a);
        }
        for (int g = 0, q, e, r; g < s; g++) {
            char w[5];
            scanf("%s%d%d", w, &e, &r);
            if (w[0] == 'C') {
                if (r > 0)
                    asd(1, e, 1, 1, a);
                else if (!r)
                    asd(1, e, 0, 1, a);
                else
                    asd(1, e, -1, 1, a);
            }
            else {
                q = asf(1, e, r, 1, a);
                printf("%c", (q > 0) ? '+' : q ? '-' : '0');
            }
        }
        puts("");
    }
}
