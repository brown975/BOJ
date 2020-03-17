#include <stdio.h>
long long a, s, d[10010], e, r, t;
int main() {
    scanf("%lld%lld", &a, &s);
    for (int i = 0; i < a; i++)
        scanf("%lld", &d[i]);
    e = 0;
    r = 2147483648000000;
    while (e < r) {
        t = 0;
        for (int i = 0; i < a; i++)
            t += d[i] / ((e + r) / 2);
        if (t >= s)
            e = (e + r) / 2 + 1;
        else
            r = (e + r) / 2;
    }
    printf("%lld", e - 1);
}
