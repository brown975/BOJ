#include <stdio.h>
int a;
bool as(int e) {
    for (int g = 2; g * g <= e; g++)
        if (!(e % g))
            return false;
    return true;
}
void asdf(int e, int r) {
    if (r == a) {
        printf("%d\n", e);
        return;
    }
    for (int g = 1; g <= 9; g += 2)
        if (as(e * 10 + g))
            asdf(e * 10 + g, r + 1);
}
int main() {
    scanf("%d", &a);
    asdf(2, 1);
    asdf(3, 1);
    asdf(5, 1);
    asdf(7, 1);
}
