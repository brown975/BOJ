#include <stdio.h>
int a, s[15], d[15];
void asdf(int e, int r) {
    if (e == 6) {
        for (int g = 0; g < 6; g++)
            printf("%d ", d[g]);
        puts("");
        return;
    }
    for (int g = r; g < a; g++) {
        d[e] = s[g];
        asdf(e + 1, g + 1);
    }
}
int main() {
    while (1) {
        scanf("%d", &a);
        if (!a)
            break;
        for (int g = 0; g < a; g++)
            scanf("%d", &s[g]);
        asdf(0, 0);
        puts("");
    }
}
