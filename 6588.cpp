#include <stdio.h>
int a[1000005], s[1000005], d, f, e, r;
int main() {
    for (int g = 2; g <= 1000000; g++) {
        if (a[g])
            continue;
        a[g] = 1;
        s[g] = 1;
        f = 2;
        while (f * g < 1000005) {
            a[f * g] = 1;
            f++;
        }
    }
    while (1) {
        scanf("%d", &f);
        if (!f)
            break;
        e = 0;
        r = f;
        while (1) {
            if (s[e] && s[r])
                break;
            e++;
            r--;
        }
        printf("%d = %d + %d\n", f, e, r);
    }
}
