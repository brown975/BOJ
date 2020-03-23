#include <stdio.h>
long long a, s, g, h;
int d[1000001], f = 0;
int main() {
    scanf("%lld%lld", &a, &s);
    for (g = 0; g < s - a + 1; g++)
        d[g] = 1;
    for (g = 2; (g <= 1000000) && (s >= g * g); g++)
        for (h = a / (g * g); h * g * g <= s; h++)
            if (g * g * h >= a)
                d[g * g * h - a] = 0;
    for (g = 0; g < s - a + 1; g++)
        f += d[g];
    printf("%d", f);
}
