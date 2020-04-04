#include <stdio.h>
#include <algorithm>
using namespace std;
bool asd(pair<pair<int, int>, pair<int, int>> e, pair<pair<int, int>, pair<int, int>> r) {
    return e.first.first < r.first.first;
}
int a, d, f, v[120005], c[120005];
pair<pair<int, int>, pair<int, int>> s[20005];
void asdf(int q, int w, int e, int r, int t, int y) {
    if (r < q || w < e)
        return;
    if (q <= e && r <= w)
        c[t] += y;
    else {
        asdf(q, w, e, (e + r) / 2, t * 2, y);
        asdf(q, w, (e + r) / 2 + 1, r, t * 2 + 1, y);
    }
    if (c[t])
        v[t] = r - e + 1;
    else {
        if (e == r)
            v[t] = 0;
        else
            v[t] = v[t * 2] + v[t * 2 + 1];
    }
}
int main() {
    scanf("%d", &a);
    for (int g = 0, q, w, e, r; g < a; s[g] = { {q,w},{r - 1,1} }, s[g + a] = { {e,w},{r - 1,-1} }, g++)
        scanf("%d%d%d%d", &q, &w, &e, &r);
    sort(s, s + 2 * a, asd);
    for (int g = 0; g < 2 * a; g++) {
        if (g)
            d += (s[g].first.first - f) * v[1];
        asdf(s[g].first.second, s[g].second.first, 0, 30000, 1, s[g].second.second);
        f = s[g].first.first;
    }
    printf("%d", d);
}
