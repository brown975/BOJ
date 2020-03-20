#include <stdio.h>
#include <string.h>
using namespace std;
int a, s, f[16], e[16], r[51];
long long w[1 << 15][100];
char d[16][55];
long long gcd(long long a, long long b) {
    return b ? gcd(b, a % b) : a;
}
int main() {
    scanf("%d", &a);
    for (int g = 0; g < a; g++) {
        scanf("%s", d[g]);
        e[g] = strlen(d[g]);
        f[g] = 0;
    }
    scanf("%d", &s);
    for (int g = 0; g < a; g++) {
        for (int h = 0; h < e[g]; h++) {
            f[g] = ((d[g][h] - '0') + f[g] * 10) % s;
        }
    }
    r[0] = 1;
    for (int g = 1; g <= 50; g++) {
        r[g] = (r[g - 1] * 10) % s;
    }
    w[0][0] = 1;
    for (int g = 0; g < (1 << a); g++) {
        for (int h = 0; h < s; h++) {
            for (int j = 0; j < a; j++) {
                if (!(g & (1 << j))) {
                    int q = (h * r[e[j]] + f[j]) % s;
                    w[g | (1 << j)][q] += w[g][h];
                }
            }
        }
    }
    long long t = 1;
    for (int g = 1; g <= a; g++)
        t = t * g;
    long long v = gcd(w[(1 << a) - 1][0], t);
    printf("%lld/%lld", w[(1 << a) - 1][0] / v, t / v);
}
