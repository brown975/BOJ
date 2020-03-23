#include <stdio.h>
int a, s, g = 1005;
int main() {
    scanf("%d%d", &a, &s);
    printf("%d.", a / s);
    while (g--) {
        a %= s;
        a *= 10;
        printf("%d", a / s);
    }
}
