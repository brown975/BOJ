#include <stdio.h>
long long a, s, d[4000005] = { 1 }, f[4000005];
long long power(long long e, long long r) {
    long long temp = 1;
    while (r) {
        if (r % 2)
            temp = (temp * e) % 1000000007;
        e = (e * e) % 1000000007;
        r /= 2;
    }
    return temp;
}

int main() {
    scanf("%lld%lld", &a, &s);
    for (int g = 1; g <= a; g++)
        d[g] = (d[g - 1] * g) % 1000000007;
    printf("%lld", (power((d[s] * d[a - s]) % 1000000007, 1000000005) * d[a]) % 1000000007);
}
