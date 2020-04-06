#include <stdio.h>
#include <algorithm>
using namespace std;
long long a, s, d[801][801], f, q, w;
int main() {
    scanf("%lld%lld", &a, &s);
    for (long long g = 1; g <= a; d[g][g] = 0, g++)
        for (long long h = 1; h <= a; h++)
            d[g][h] = 2000000000;
    for (long long g = 0, w, e, r; g < s; d[w][e] = min(d[w][e], r), d[e][w] = min(d[e][w], r), g++)
        scanf("%lld%lld%lld", &w, &e, &r);
    scanf("%lld%lld", &q, &w);
    for (long long g = 1; g <= a; g++)
        for (long long h = 1; h <= a; h++)
            for (long long j = 1; j <= a; j++)
                d[h][j] = min(d[h][j], d[h][g] + d[g][j]);
    f = min(d[1][q] + d[q][w] + d[w][a], d[1][w] + d[q][w] + d[q][a]);
    if (f >= 2000000000 || !s)
        printf("-1");
    else
        printf("%lld", f);
}
