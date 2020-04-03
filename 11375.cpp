#include <stdio.h>
#include <vector>
#include <string.h>
using namespace std;
int a, s, d[1005], f[1005], w[1005], t = 0;
vector<int> v[1005];
int asdf(int e) {
    w[e] = 1;
    for (int g : v[e])
        if (!f[g] || !w[f[g]] && asdf(f[g])) {
            d[e] = g;
            f[g] = e;
            return 1;
        }
    return 0;
}
int main() {
    scanf("%d%d", &a, &s);
    for (int g = 1, e; g <= a; g++) {
        scanf("%d", &e);
        for (int j = 0, r; j < e; v[g].push_back(r), j++)
            scanf("%d", &r);
    }
    for (int g = 1; g <= a; g++) {
        memset(w, 0, sizeof(w));
        if (asdf(g))
            t++;
    }
    printf("%d", t);
}
