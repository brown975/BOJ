#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
int a, s, t = 2000000000, q = 0;
vector<pair<int, int>> d, f;
vector<int> v;
void asdf(int e, int r) {
    q = 0;
    if (e > f.size())
        return;
    if (r == s) {
        for (int g = 0, w = 2000000000; g < (int)d.size(); g++, q += w, w = 2000000000)
            for (int h : v)
                w = min(w, abs(d[g].first - f[h].first) + abs(d[g].second - f[h].second));
        t = min(t, q);
        return;
    }
    v.push_back(e);
    asdf(e + 1, r + 1);
    v.pop_back();
    asdf(e + 1, r);
}
int main() {
    scanf("%d%d", &a, &s);
    for (int g = 1, e; g <= a; g++)
        for (int h = 1; h <= a; h++) {
            scanf("%d", &e);
            if (e == 1)
                d.push_back({ g, h });
            else if (e == 2)
                f.push_back({ g, h });
        }
    asdf(0, 0);
    printf("%d", t);
}
