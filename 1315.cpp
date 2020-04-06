#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
int a, d[1005][1005], f;
pair<pair<int, int>, int> s[105];
void asdf(int e, int r) {
    if (d[e][r] + 1)
        return;
    d[e][r] = 0;
    int w = 2;
    for (int g = 0; g < a; g++)
        if (s[g].first.first <= e || s[g].first.second <= r) {
            w += s[g].second;
            d[e][r]++;
        }
    f = max(f, d[e][r]);
    w -= e;
    w -= r;
    for (int g = e; g <= min(1000, e + w); g++)
        asdf(g, min(1000, (e + r + w - g)));
}
int main() {
    scanf("%d", &a);
    for (int g = 0, w, e, r; g < a; s[g] = { {w,e},r }, g++)
        scanf("%d%d%d", &w, &e, &r);
    memset(d, -1, sizeof(d));
    asdf(1, 1);
    printf("%d", f);
}
