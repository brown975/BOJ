#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
int a, s, d[501], f[501][501], e[501];
int main() {
    scanf("%d", &a);
    while (a--) {
        scanf("%d", &s);
        for (int g = 1; g <= s; e[g] = e[g - 1] + d[g], g++)
            scanf("%d", &d[g]);
        for (int g = 1; g < s; g++) {
            for (int h = 1; h + g <= s; h++) {
                int r = h + g;
                f[h][r] = 2147483647;
                for (int j = h; j < r; ++j)
                    f[h][r] = min(f[h][r], f[h][j] + f[j + 1][r] + e[r] - e[h - 1]);
            }
        }
        printf("%d\n", f[1][s]);
    }
}
