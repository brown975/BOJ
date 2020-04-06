#include <stdio.h>
int a, s, d, f, g, h;
int main() {
    scanf("%d%d%d%d%d%d", &a, &s, &d, &f, &g, &h);
    if (a - d) {
        if (g - d) {
            if (s - f)
                printf("%d %d", d, s);
            else
                printf("%d %d", d, h);
        }
        else {
            if (s - f)
                printf("%d %d", a, f);
            else
                printf("%d %d", a, h);
        }
    }
    else {
        if (s - h)
            printf("%d %d", g, s);
        else
            printf("%d %d", g, f);
    }
}
