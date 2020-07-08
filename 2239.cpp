#include <stdio.h>
#include <stdlib.h>
int a[9][9], s[9][10], d[9][10], f[9][10], r[81], t;
void asdf(int e) {
    if (e == t) {
        for (int g = 0; g < 9; g++, puts("")) {
            for (int h = 0; h < 9; h++) {
                printf("%d", a[g][h]);
            }
        }
        exit(0);
    }
    int q = r[e] / 9, w = r[e] % 9;
    for (int g = 1; g < 10; g++) {
        if (s[q][g] | d[w][g] | f[q / 3 * 3 + w / 3][g])
            continue;
        s[q][g] = d[w][g] = f[q / 3 * 3 + w / 3][g] = true;
        a[q][w] = g;
        asdf(e + 1);
        a[q][w] = 0;
        s[q][g] = d[w][g] = f[q / 3 * 3 + w / 3][g] = false;
    }
}
int main() {
    for (int g = 0; g < 9; g++) {
        for (int h = 0; h < 9; h++) {
            scanf("%1d", &a[g][h]);
            if (!a[g][h])
                r[t++] = g * 9 + h;
            else {
                s[g][a[g][h]] = d[h][a[g][h]] = f[g / 3 * 3 + h / 3][a[g][h]] = true;
            }
        }
    }
    asdf(0);
}
