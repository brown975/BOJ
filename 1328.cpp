#include <stdio.h>
long long a, s, d, f[102][102][102], g, h, j;
int main() {
    scanf("%lld%lld%lld", &a, &s, &d);
    f[1][1][1] = 1;
    for (g = 2; g <= a; g++)
        for (h = 1; h <= s; h++)
            for (j = 1; j <= d; j++)
                f[g][h][j] = (f[g - 1][h - 1][j] + f[g - 1][h][j - 1] + f[g - 1][h][j] * (g - 2)) % 1000000007;
    printf("%lld", f[a][s][d] % 1000000007);
}
