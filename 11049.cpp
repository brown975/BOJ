#include <cstdio>
#include <algorithm>
using namespace std;
int a, s[555], d[555], f[555][555];
int main() {
    scanf("%d", &a);
    for (int g = 1; g <= a; g++)
        scanf("%d%d", &s[g], &d[g]);
    for (int g = a; g; g--) {
        for (int h = g + 1; h <= a; h++) {
            f[g][h] = 2147483647;
            for (int j = g; j <= h; j++)
                f[g][h] = min(f[g][h], f[g][j] + f[j + 1][h] + s[g] * d[j] * d[h]);
        }
    }
    printf("%d", f[1][a]);
}
