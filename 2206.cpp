#include <stdio.h>
#include <queue>
using namespace std;
int a, s, d[1001][1001], f[1001][1001][2] = { 1 };
queue<pair<pair<int, int>, int>> q;
int main() {
    scanf("%d%d", &a, &s);
    for (int g = 0; g < a; g++)
        for (int h = 0; h < s; h++)
            scanf("%1d", &d[g][h]);
    q.push({ {0, 0}, 0 });
    while (!q.empty()) {
        int w = q.front().second, e = q.front().first.first, r = q.front().first.second;
        q.pop();
        if ((e == a - 1) && (r == s - 1)) {
            printf("%d", f[e][r][w]);
            return 0;
        }
        if (e && !f[e - 1][r][w]) {
            if (!d[e - 1][r]) {
                f[e - 1][r][w] = f[e][r][w] + 1;
                q.push({ {e - 1, r}, w });
            }
            if (d[e - 1][r] && !w) {
                f[e - 1][r][1] = f[e][r][w] + 1;
                q.push({ {e - 1, r}, 1 });
            }
        }
        if (r && !f[e][r - 1][w]) {
            if (!d[e][r - 1]) {
                f[e][r - 1][w] = f[e][r][w] + 1;
                q.push({ {e, r - 1}, w });
            }
            if (d[e][r - 1] && !w) {
                f[e][r - 1][1] = f[e][r][w] + 1;
                q.push({ {e, r - 1}, 1 });
            }
        }
        if ((e + 1 < a) && !f[e + 1][r][w]) {
            if (!d[e + 1][r]) {
                f[e + 1][r][w] = f[e][r][w] + 1;
                q.push({ {e + 1, r}, w });
            }
            if (d[e + 1][r] && !w) {
                f[e + 1][r][1] = f[e][r][w] + 1;
                q.push({ {e + 1, r}, 1 });
            }
        }
        if ((r + 1 < s) && !f[e][r + 1][w]) {
            if (!d[e][r + 1]) {
                f[e][r + 1][w] = f[e][r][w] + 1;
                q.push({ {e, r + 1}, w });
            }
            if (d[e][r + 1] && !w) {
                f[e][r + 1][1] = f[e][r][w] + 1;
                q.push({ {e, r + 1}, 1 });
            }
        }
    }
    printf("-1");
}
