#include <stdio.h>
int a, d[1000001], s[1000001];
int asdf(int e) {
    int f, w, r = 2000000000;
    if (e == 1)
        return 0;
    if (d[e])
        return d[e];
    w = asdf(e - 1) + 1;
    if (r > w) {
        f = e - 1;
        r = w;
    }
    if (!(e % 2)) {
        w = asdf(e / 2) + 1;
        if (r > w) {
            r = w;
            f = e / 2;
        }
    }
    if (!(e % 3)) {
        w = asdf(e / 3) + 1;
        if (r > w) {
            r = w;
            f = e / 3;
        }
    }
    s[e] = f;
    return d[e] = r;
}
int main() {
    scanf("%d", &a);
    printf("%d\n", asdf(a));
    printf("%d ", a);
    while (s[a] - 1) {
        printf("%d ", s[a]);
        a = s[a];
    }
    printf("1");
}
