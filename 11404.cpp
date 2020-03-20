#include <stdio.h>
#include <algorithm>
using namespace std;
int a, s;
int d[101][101];
int main() {
    scanf("%d%d", &a, &s);
    for (int g = 0, w, e, r; g < s; g++) {
        scanf("%d%d%d", &w, &e, &r);
        if (!d[w][e])
            d[w][e] = r;
        else
            d[w][e] = min(d[w][e], r);
    }
    for (int g = 1; g <= a; g++)
        for (int h = 1; h <= a; h++) {
            if (!d[h][g])
                continue;
            for (int j = 1; j <= a; j++) {
                if (!d[g][j] || (h == j))
                    continue;
                if (!d[h][j] || (d[h][j] > d[h][g] + d[g][j]))
                    d[h][j] = d[h][g] + d[g][j];
            }
        }
    for (int g = 1; g <= a; g++, puts(""))
        for (int h = 1; h <= a; h++)
            printf("%d ", d[g][h]);
}
