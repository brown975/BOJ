#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
int a, s, d[501] = { 2000000000 }, t = 0;
vector<pair<int, int>> f[501];
int main() {
    scanf("%d%d", &a, &s);
    for (int g = 0, w, e, r; g < s; g++) {
        scanf("%d%d%d", &w, &e, &r);
        f[w].push_back({ e, r });
    }
    fill(d, d + 501, 2000000000);
    d[1] = 0;
    for (int g = 1; g <= a; g++) {
        for (int h = 1; h <= a; h++) {
            for (int j = 0; j < f[h].size(); j++) {
                if (d[f[h][j].first] > d[h] + f[h][j].second) {
                    d[f[h][j].first] = d[h] + f[h][j].second;
                    if (g == a)
                        t = 1;
                }
            }
        }
    }
    if (t) {
        printf("-1");
    }
    else {
        for (int g = 2; g <= a; g++) {
            if (d[g] == 2000000000) {
                printf("-1\n");
            }
            else {
                printf("%d\n", d[g]);
            }
        }
    }
}
