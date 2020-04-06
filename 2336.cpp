#include <stdio.h>
#include <algorithm>
using namespace std;
pair<pair<int, int>, int> s[500005];
int a, d[2000005], f;
int asd(int q, int w, int e, int r, int t) {
    if (r < q || q < e)
        return d[t];
    if (e == r)
        return d[t] = w;
    return d[t] = min(asd(q, w, e, (e + r) / 2, t * 2), asd(q, w, (e + r) / 2 + 1, r, t * 2 + 1));
}
int asdf(int q, int w, int e, int r, int t) {
    if (r < q || w < e)
        return 2000000000;
    if (q <= e && r <= w)
        return d[t];
    return min(asdf(q, w, e, (e + r) / 2, t * 2), asdf(q, w, (e + r) / 2 + 1, r, t * 2 + 1));
}
int main() {
    scanf("%d", &a);
    for (int g = 1, e; g <= a; s[e].first.first = g, g++)
        scanf("%d", &e);
    for (int g = 1, e; g <= a; s[e].first.second = g, g++)
        scanf("%d", &e);
    for (int g = 1, e; g <= a; s[e].second = g, g++)
        scanf("%d", &e);
    sort(s + 1, s + 1 + a);
    for (int g = 1; g <= a; g++)
        asd(g, 2000000000, 1, a, 1);
    for (int g = 1; g <= a; g++) {
        if (asdf(1, s[g].first.second, 1, a, 1) > s[g].second)
            f++;
        asd(s[g].first.second, s[g].second, 1, a, 1);
    }
    printf("%d", f);
}
