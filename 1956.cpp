#include <stdio.h>
#include <algorithm>
using namespace std;
int a, s, d[405][405];
int main() {
    scanf("%d%d", &a, &s);
    for (int g = 1; g <= a; g++)
        for (int h = 1; h <= a; h++)
            d[g][h] = 10000000;
    while (s--) {
        int w, e, r;
        scanf("%d%d%d", &w, &e, &r);
        d[w][e] = r;
    }
    for (int g = 1; g <= a; g++)
        for (int h = 1; h <= a; h++)
            for (int j = 1; j <= a; j++)
                d[g][h] = min(d[g][h], d[g][j] + d[j][h]);
    int ans = 10000000;
    for (int g = 1; g <= a; g++)
        ans = min(ans, d[g][g]);
    if (ans == 10000000)
        ans = -1;
    printf("%d", ans);
}
