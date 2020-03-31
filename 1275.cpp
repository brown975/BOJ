#include <stdio.h>
#include <algorithm>
using namespace std;
int a, s;
long long d[100001], f[1000001];
long long asd(int w, int e, int r) {
    if (e == r)
        return f[w] = d[e];
    return f[w] = asd(w * 2, e, (e + r) / 2) + asd(w * 2 + 1, (e + r) / 2 + 1, r);
}
void asdf(int w, int e, int r, int q, long long t) {
    if (q < e || r < q)
        return;
    f[w] = f[w] + t;
    if (e - r) {
        asdf(w * 2, e, (e + r) / 2, q, t);
        asdf(w * 2 + 1, (e + r) / 2 + 1, r, q, t);
    }
}
long long as(int w, int e, int r, int q, int t) {
    if (t < e || r < q)
        return 0;
    if (q <= e && r <= t)
        return f[w];
    return as(w * 2, e, (e + r) / 2, q, t) + as(w * 2 + 1, (e + r) / 2 + 1, r, q, t);
}
int main() {
    scanf("%d%d", &a, &s);
    for (int g = 0; g < a; g++)
        scanf("%lld", &d[g]);
    asd(1, 0, a - 1);
    for (int g = 0, q, w, e; g < s; g++) {
        long long r;
        scanf("%d%d%d%lld", &q, &w, &e, &r);
        if (q > w)
            swap(q, w);
        long long v = r - d[e - 1];
        d[e - 1] = r;
        printf("%lld\n", as(1, 0, a - 1, q - 1, w - 1));
        asdf(1, 0, a - 1, e - 1, v);
    }
}
