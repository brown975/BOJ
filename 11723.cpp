#include <stdio.h>
int a, s = 0, f;
char d[9];
int main() {
    scanf("%d", &a);
    while (a--) {
        scanf("%s", d);
        if (d[0] == 'a') {
            if (d[1] == 'd') {
                scanf("%d", &f);
                s |= (1 << (f - 1));
            }
            else {
                s = (1 << 21) - 1;
            }
        }
        else if (d[0] == 'r') {
            scanf("%d", &f);
            s &= ~(1 << (f - 1));
        }
        else if (d[0] == 'c') {
            scanf("%d", &f);
            (s & (1 << (f - 1))) ? puts("1") : puts("0");
        }
        else if (d[0] == 't') {
            scanf("%d", &f);
            s ^= (1 << (f - 1));
        }
        else if (d[0] == 'e')
            s = 0;
    }
}
