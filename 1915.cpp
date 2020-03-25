#include <stdio.h>
#include <algorithm>
using namespace std;
int a, s, d[1005][1005], f, e;
int main() {
    scanf("%d%d", &a, &s);
    for (int g = 1; g <= a; g++)
        for (int h = 1; h <= s; h++) {
            scanf("%1d", &e);
            if (e) {
                d[g][h] = min(d[g - 1][h], min(d[g][h - 1], d[g - 1][h - 1])) + 1;
                f = max(f, d[g][h]);
            }
        }
    printf("%d", f * f);
}
