#include <stdio.h>
#include <string.h>
int a, s, d[100005], f, e[100005], r[100005];
void asdf(int w) {
    e[w] = 1;
    if (!e[d[w]])
        asdf(d[w]);
    else if (!r[d[w]]) {
        for (int g = d[w]; g - w; g = d[g], f++);
        f++;
    }
    r[w] = 1;
}
int main() {
    scanf("%d", &a);
    while (a--) {
        memset(e, 0, sizeof(e));
        memset(r, 0, sizeof(r));
        scanf("%d", &s);
        for (int g = 1; g <= s; g++)
            scanf("%d", &d[g]);
        f = 0;
        for (int g = 1; g <= s; g++)
            if (!e[g])
                asdf(g);
        printf("%d\n", s - f);
    }
}
