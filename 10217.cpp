#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
int a, s, d, f;
vector<vector<pair<int, pair<int, int>>>> t;
vector<vector<int>> y;
int go(int e, int r) {
    if (e == s)
        return 0;
    if (y[e][r] + 1)
        return y[e][r];
    int v = 1000000000;
    for (auto e : t[e]) {
        if (r + e.second.first > d)
            continue;
        int c = go(e.first, r + e.second.first);
        if (c == 1000000000)
            continue;
        v = min(v, c + e.second.second);
    }
    return y[e][r] = v;
}
int main() {
    scanf("%d", &a);
    while (a--) {
        scanf("%d%d%d", &s, &d, &f);
        t = vector<vector<pair<int, pair<int, int>>>>(s + 1);
        y = vector<vector<int>>(s + 1, vector<int>(d + 1, -1));
        for (int i = 0, q, w, e, r; i < f; i++) {
            scanf("%d%d%d%d", &q, &w, &e, &r);
            t[q].push_back({ w,{e,r} });
        }
        int v = go(1, 0);
        if (v == 1000000000)
            printf("Poor KCM\n");
        else
            printf("%d\n", v);
    }
}
