#include <stdio.h>
char a[][6] = { "***","* *","***" }, s[2200][2200];
int d;
void asdf(int d, int e, int r) {
    if (d == 1) {
        for (int g = 0; g < 3; g++)
            for (int h = 0; h < 3; h++)
                s[e + g][r + h] = a[g][h];
        return;
    }
    asdf(d / 3, e, r);
    asdf(d / 3, e, r + d);
    asdf(d / 3, e, r + d * 2);
    asdf(d / 3, e + d, r);
    asdf(d / 3, e + d, r + d * 2);
    asdf(d / 3, e + d * 2, r);
    asdf(d / 3, e + d * 2, r + d);
    asdf(d / 3, e + d * 2, r + d * 2);
}
int main() {
    scanf("%d", &d);
    asdf(d / 3, 0, 0);
    for (int g = 0; g < d; g++) {
        for (int h = 0; h < d; h++)
            printf("%c", (s[g][h] == '*') ? '*' : ' ');
        printf("\n");
    }
}
