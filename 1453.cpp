#include <stdio.h>
int a, s[101], d, f;
int main() {
    scanf("%d", &a);
    while (a--) {
        scanf("%d", &d);
        if (s[d])
            f++;
        s[d]++;
    }
    printf("%d", f);
}
