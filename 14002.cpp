#include<stdio.h>
int s[1001], d[1001], f[1001], r = -2000000000;
void asdf(int e) {
    if (!e)
        return;
    asdf(f[e]);
    printf("%d ", s[e]);
}
int main() {
    int a;
    scanf("%d", &a);
    for (int g = 1; g <= a; g++)
        scanf("%d", &s[g]);
    for (int g = 1; g <= a; g++) {
        d[g] = 1;
        for (int h = 1; h < g; h++)
            if ((s[g] > s[h]) && (d[g] < d[h] + 1)) {
                d[g] = d[h] + 1;
                f[g] = h;
            }
    }
    int e = 0;
    for (int g = 1; g <= a; g++)
        if (r < d[g]) {
            r = d[g];
            e = g;
        }
    printf("%d\n", r);
    asdf(e);
}
