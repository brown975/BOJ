#include <stdio.h>
#include <algorithm>
#include <string.h>
using namespace std;
int a, s, d, f[4][10005], e[2][10005], t;
int asdf() {
    f[0][0] = 0;
    f[1][0] = e[0][0] ? 1 : 0;
    f[2][0] = e[1][0] ? 1 : 0;
    f[3][0] = e[0][0] ? ((e[0][0] + e[1][0] > d) ? 2 : 1) : (e[1][0] ? 1 : 0);
    for (int g = 1; g <= s; g++) {
        f[0][g] = f[3][g - 1];
        f[1][g] = min(f[3][g - 1] + (e[0][g] ? 1 : 0), ((e[0][g - 1] + e[0][g] > d) ? 2000000000 : f[2][g - 1] + 1));
        f[2][g] = min(f[3][g - 1] + (e[1][g] ? 1 : 0), ((e[1][g - 1] + e[1][g] > d) ? 2000000000 : f[1][g - 1] + 1));
        f[3][g] = min(min(f[3][g - 1] + (e[0][g] ? ((e[0][g] + e[1][g] > d) ? 2 : 1) : (e[1][g] ? 1 : 0)), f[1][g] + (e[1][g] ? 1 : 0)), min(f[2][g] + (e[0][g] ? 1 : 0), (e[0][g - 1] + e[0][g] > d || e[1][g - 1] + e[1][g] > d) ? 2000000000 : f[0][g - 1] + 2));
    }
    return f[3][s];
}
int main() {
    scanf("%d", &a);
    while (a--) {
        memset(e, 0, sizeof(e));
        memset(f, 0, sizeof(f));
        scanf("%d%d", &s, &d);
        for (int g = 1; g <= s; g++)
            scanf("%d", &e[0][g]);
        for (int g = 1; g <= s; g++)
            scanf("%d", &e[1][g]);
        t = asdf();
        e[0][0] = e[0][s];
        e[0][s] = 0;
        t = min(t, asdf());
        e[1][0] = e[1][s];
        e[1][s] = 0;
        t = min(t, asdf());
        e[0][s] = e[0][0];
        e[0][0] = 0;
        printf("%d\n", min(t, asdf()));
    }
}
