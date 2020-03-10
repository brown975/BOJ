#include <stdio.h>
int a, s, d, f;
int main() {
    scanf("%d", &a);
    while (a--) {
        scanf("%d", &f);
        d ^= f;
        if (f > 1)
            s++;
    }
    if (s)
        printf("%s", d ? "koosaga" : "cubelover");
    else
        printf("%s", d ? "cubelover" : "koosaga");
}
