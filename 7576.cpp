#include <stdio.h>
#include <queue>
using namespace std;
int a, s, d[1001][1001], f;
queue<pair<int, int>> w;
int main() {
    scanf("%d%d", &a, &s);
    for (int g = 0; g < s; g++) {
        for (int h = 0; h < a; h++) {
            scanf("%d", &d[g][h]);
            if (d[g][h] == 1) {
                w.push({ g, h });
            }
        }
    }
    while (!w.empty()) {
        int e = w.front().first, r = w.front().second;
        w.pop();
        if (e && !d[e - 1][r]) {
            d[e - 1][r] = d[e][r] + 1;
            w.push({ e - 1, r });
        }
        if (r && !d[e][r - 1]) {
            d[e][r - 1] = d[e][r] + 1;
            w.push({ e, r - 1 });
        }
        if ((e + 1 < s) && !d[e + 1][r]) {
            d[e + 1][r] = d[e][r] + 1;
            w.push({ e + 1, r });
        }
        if ((r + 1 < a) && !d[e][r + 1]) {
            d[e][r + 1] = d[e][r] + 1;
            w.push({ e, r + 1 });
        }
    }
    for (int g = 0; g < s; g++) {
        for (int h = 0; h < a; h++) {
            if (!d[g][h]) {
                printf("-1");
                return 0;
            }
            if (f < d[g][h])
                f = d[g][h];
        }
    }
    printf("%d", f - 1);
}
