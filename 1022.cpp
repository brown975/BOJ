#include <stdio.h>
#include <algorithm>
#include <math.h>
using namespace std;
int a, s, d, f, t = 0;
int asdf(int e, int r) {
    int t = max(abs(e), abs(r)), q = (2 * t + 1) * (2 * t + 1);
    if (e == t)
        return q - t + r;
    q -= 2 * t;
    if (r == -t)
        return q - t + e;
    q -= 2 * t;
    if (e == -t)
        return q - r - t;
    q -= 2 * t;
    return q - e - t;
}
int as(int e) {
    return e ? (as(e / 10) + 1) : 0;
}
int main() {
    scanf("%d%d%d%d", &a, &s, &d, &f);
    for (int g = a; g <= d; g++)
        for (int h = s; h <= f; h++)
            t = max(t, as(asdf(g, h)));
    for (int g = a; g <= d; g++, puts(""))
        for (int h = s; h <= f; h++)
            printf("%*d ", t, asdf(g, h));
}
