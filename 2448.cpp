#include <stdio.h>
char a[][6] = { "  *  "," * * ","*****" }, s[3500][6500];
int d;
void asdf(int d, int e, int r) {
    if (d == 1) {
        for (int g = 0; g < 3; g++)
            for (int h = 0; h < 5; h++)
                s[e + g][r + h] = a[g][h];
        return;
    }
    asdf(d / 2, e, r + 3 * d / 2);
    asdf(d / 2, e + 3 * d / 2, r);
    asdf(d / 2, e + 3 * d / 2, r + 3 * d);
}
int main() {
    scanf("%d", &d);
    asdf(d / 3, 0, 0);
    for (int g = 0; g < d; g++) {
        for (int h = 0; h < 2 * d - 1; h++)
            printf("%c", (s[g][h] == '*') ? '*' : ' ');
        printf("\n");
    }
}
