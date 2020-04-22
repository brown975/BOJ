#include <stdio.h>
#include <string.h>
int a, s, w, d, f[55][55], e[55][55], c, v;
void asd() {
    memcpy(e, f, sizeof(f));
    for (int g = 0; g < a; g++) {
        for (int h = 0; h < s; h++) {
            if (e[g][h] > 4) {
                int r = e[g][h] / 5;
                if (h + 1 < s && e[g][h + 1] + 1) {
                    f[g][h + 1] += r;
                    f[g][h] -= r;
                }
                if (0 <= h - 1 && e[g][h - 1] + 1) {
                    f[g][h - 1] += r;
                    f[g][h] -= r;
                }
                if (0 <= g - 1 && h < s && e[g - 1][h] + 1) {
                    f[g - 1][h] += r;
                    f[g][h] -= r;
                }
                if (g + 1 < a && e[g + 1][h] + 1) {
                    f[g + 1][h] += r;
                    f[g][h] -= r;
                }
            }
        }
    }
}

void asf() {
    for (int g = c - 2; g + 1; g--)
        f[g + 1][0] = f[g][0];
    for (int g = 0; g < s - 1; g++)
        f[0][g] = f[0][g + 1];
    for (int g = 0; g < c; g++)
        f[g][s - 1] = f[g + 1][s - 1];
    for (int g = s - 2; g + 1; g--)
        f[c][g + 1] = f[c][g];
    f[c][1] = 0;
    for (int g = v + 1; g < a - 1; g++)
        f[g][0] = f[g + 1][0];
    for (int g = 0; g < s - 1; g++)
        f[a - 1][g] = f[a - 1][g + 1];
    for (int g = a - 2; g >= v; g--)
        f[g + 1][s - 1] = f[g][s - 1];
    for (int g = s - 2; g + 1; g--)
        f[v][g + 1] = f[v][g];
    f[v][1] = 0;
}
int main() {
    scanf("%d%d%d", &a, &s, &d);
    for (int g = 0; g < a; g++) {
        for (int h = 0; h < s; h++) {
            scanf("%d", &f[g][h]);
            if (f[g][h] == -1) {
                if (v)
                    c = v;
                v = g;
            }
        }
    }
    while (d--) {
        asd();
        asf();
    }
    for (int g = 0; g < a; g++)
        for (int h = 0; h < s; h++)
            if (f[g][h] > 0)
                w += f[g][h];
    printf("%d", w);
}
