#include <stdio.h>
using namespace std;
int a, s, d, f;
void asdf(int w, int e, int r) {
    if (w == 2) {
        if ((e == s) && (r == d)) {
            printf("%d", f);
            return;
        }
        f++;
        if ((e == s) && (r + 1 == d)) {
            printf("%d", f);
            return;
        }
        f++;
        if ((e + 1 == s) && (r == d)) {
            printf("%d", f);
            return;
        }
        f++;
        if ((e + 1 == s) && (r + 1 == d)) {
            printf("%d", f);
            return;
        }
        f++;
        return;
    }
    w /= 2;
    asdf(w, e, r);
    asdf(w, e, r + w);
    asdf(w, e + w, r);
    asdf(w, e + w, r + w);
}
int main() {
    scanf("%d%d%d%d", &a, &s, &d);
    asdf(1 << a, 0, 0);
}
