#include <stdio.h>
int a[10001], s[10001], d, f, e, r;
int main() {
    for (int g = 2; g <= 10000; g++) {
        if (a[g] == 1)
            continue;
        a[g] = 1;
        s[g] = 1;
        f = 2;
        while (f * g < 10001) {
            a[f * g] = 1;
            f++;
        }
    }
    scanf("%d", &d);
    while (d--) {
        scanf("%d", &f);
        e = f / 2;
        r = f / 2;
        while (e >= 2) {
            if (s[e] == 1 && s[r] == 1)
                break;
            e--;
            r++;
        }
        printf("%d %d\n", e, r);
    }
}
