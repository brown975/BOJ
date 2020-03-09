#include <stdio.h>
int a, s = 0, d, f, e;
int main(void) {
    scanf("%d", &a);
    for (int g = 1; g <= a; g++) {
        if (g < 100)
            s++;
        else {
            d = g % 10;
            f = (g / 10) % 10;
            e = g / 100;

            if ((d - f) == (f - e))
                s++;
        }
    }
    printf("%d", s);
}
