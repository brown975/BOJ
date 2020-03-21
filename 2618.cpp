#include <stdio.h>
#include <algorithm>
#include <string.h>
using namespace std;
int f[1001][1001], a, s, t[1001];
pair<int, int> d[1001];
int dist(pair<int, int> a, pair<int, int> b) {
    return abs(a.first - b.first) + abs(a.second - b.second);
}
int func(int e, int r) {
    if ((e == s) || (r == s))
        return 0;
    int& v = f[e][r];
    if (v + 1)
        return v;
    int w, q;
    if (!e)
        w = func(max(e, r) + 1, r) + dist(d[max(e, r) + 1], { 1,1 });
    else
        w = func(max(e, r) + 1, r) + dist(d[max(e, r) + 1], d[e]);
    if (!r)
        q = func(e, max(e, r) + 1) + dist(d[max(e, r) + 1], { a,a });
    else
        q = func(e, max(e, r) + 1) + dist(d[max(e, r) + 1], d[r]);
    return v = min(w, q);
}
void solve(int e, int r) {
    if (e == s || r == s)
        return;
    int w, q;
    if (!e)
        w = func(max(e, r) + 1, r) + dist(d[max(e, r) + 1], { 1,1 });
    else
        w = func(max(e, r) + 1, r) + dist(d[max(e, r) + 1], d[e]);
    if (!r)
        q = func(e, max(e, r) + 1) + dist(d[max(e, r) + 1], { a,a });
    else
        q = func(e, max(e, r) + 1) + dist(d[max(e, r) + 1], d[r]);
    if (w < q) {
        t[max(e, r) + 1] = 1;
        solve(max(e, r) + 1, r);
    }
    else {
        t[max(e, r) + 1] = 2;
        solve(e, max(e, r) + 1);
    }
}
int main() {
    memset(f, -1, sizeof(f));
    scanf("%d%d", &a, &s);
    for (int g = 1; g <= s; g++)
        scanf("%d%d", &d[g].first, &d[g].second);
    printf("%d\n", func(0, 0));
    solve(0, 0);
    for (int g = 1; g <= s; g++)
        printf("%d\n", t[g]);
}
