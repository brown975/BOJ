#include <stdio.h>
#include <algorithm>
using namespace std;
int a, s, d[101], f[101], e[10001], r, g, h;
int main() {
    scanf("%d%d", &a, &s);
    for (g = 0; g < a; g++)
        scanf("%d", &d[g]);
    for (g = 0; g < a; r += f[g], g++)
        scanf("%d", &f[g]);
    for (g = 0; g < a; g++)
        for (h = r; h >= f[g]; h--)
            e[h] = max(e[h], e[h - f[g]] + d[g]);
    for (g = 0; (g < r) && (e[g] < s); g++);
    printf("%d", g);
}
