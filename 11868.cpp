#include <stdio.h>
int a, s, d;
int main() {
    scanf("%d", &a);
    while (a--) {
        scanf("%d", &d);
        s ^= d;
    }
    printf("%s", s ? "koosaga" : "cubelover");
}
