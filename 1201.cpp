#include <stdio.h>
#include <algorithm>
using namespace std;
int a, s, d, f[501], e, r;
int main() {
    scanf("%d%d%d", &a, &s, &d);
    if (!(s + d - 1 <= a) || !(a <= s * d)) {
        printf("-1");
        return 0;
    }
    for (int g = 1; g <= a; g++)
        f[a - g] = g;
    reverse(f + a - s, f + a);
    r = a - s + 1;
    e = 1;
    while (r != d) {
        if ((r - d) / s) {
            reverse(f + a - s * (e + 1), f + a - s * e);
            e++;
            r -= s - 1;
        }
        else {
            reverse(f + a - s * e - r + d - 1, f + a - s * e);
            break;
        }
    }
    for (int g = 0; g < a; g++)
        printf("%d ", f[g]);
}
