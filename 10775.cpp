#include <stdio.h>
#include <algorithm>
using namespace std;
int a, s, d[100005], f, t;
int asdf(int e) {
    if (e == d[e])
        return e;
    return d[e] = asdf(d[e]);
}
int main() {
    scanf("%d%d", &a, &s);
    for (int g = 0; g <= a; g++)
        d[g] = g;
    for (int g = 0, e; g < s; g++) {
        scanf("%d", &e);
        t = asdf(e);
        if (!t)
            break;
        d[t] = t - 1;
        f++;
    }
    printf("%d", f);
}
