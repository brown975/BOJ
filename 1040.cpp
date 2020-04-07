#include <stdio.h>
#include <string>
#include <string.h>
using namespace std;
typedef long long ll;
ll a, s, f[20][1030][2][2], t[20];
string d;
ll asdf(int q, int w, bool e, bool r) {
    if (f[q][w][e][r] + 1)
        return f[q][w][e][r];
    if (q == 19) {
        if (!e)
            return f[q][w][e][r] = -2;
        int v = 0;
        for (int g = 0; g < 10; g++)
            v += (w & (1 << g)) > 0;
        if (v - s)
            return f[q][w][e][r] = -2;
        return f[q][w][e][r] = 0;
    }
    f[q][w][e][r] = 0;
    if (r && d[q] == 0) {
        ll v = asdf(q + 1, w, e, r);
        if (v >= 0)
            return f[q][w][e][r] = v;
    }
    for (int g = (e ? 0 : d[q]); g < 10; g++) {
        if (r && g == 0)
            continue;
        ll v = asdf(q + 1, w | (1 << g), e || (g > d[q]), r && !g);
        if (v >= 0)
            return f[q][w][e][r] = v + t[q] * g;
    }
    return f[q][w][e][r] = -2;
}
int main() {
    scanf("%lld%lld", &a, &s);
    d = to_string(a - 1);
    while (d.size() < 19)
        d = "0" + d;
    for (int g = 0; g < 19; g++)
        d[g] -= '0';
    t[18] = 1;
    for (int g = 17; g + 1; g--)
        t[g] = t[g + 1] * 10;
    memset(f, -1, sizeof(f));
    printf("%lld", asdf(0, 0, 0, 1));
}
