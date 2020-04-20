#include <stdio.h>
#include <algorithm>
#include <string.h>
using namespace std;
int a, s, d[9][9], f[9][9], c = 2000000000, v;
int dfs(int e, int r) {
    int t = 1;
    f[e][r] = 1;
    if (e + 1 < a && !f[e + 1][r] && !d[e + 1][r])
        t += dfs(e + 1, r);
    if (0 <= e - 1 && !f[e - 1][r] && !d[e - 1][r])
        t += dfs(e - 1, r);
    if (0 <= r - 1 && !f[e][r - 1] && !d[e][r - 1])
        t += dfs(e, r - 1);
    if (r + 1 < s && !f[e][r + 1] && !d[e][r + 1])
        t += dfs(e, r + 1);
    return t;
}
int main() {
    scanf("%d%d", &a, &s);
    for (int g = 0; g < a; g++)
        for (int h = 0; h < s; (d[g][h] == 1) ? v++ : 0, h++)
            scanf("%d", &d[g][h]);
    for (int g = 0; g < a; g++)
        for (int h = 0; h < s; h++)
            for (int j = 0; j < a; j++)
                for (int k = 0; k < s; k++)
                    for (int u = 0; u < a; u++)
                        for (int i = 0; i < s; i++)
                            if (!d[g][h] && !d[j][k] && !d[u][i]) {
                                int t = 0;
                                memset(f, 0, sizeof(f));
                                d[g][h] = d[j][k] = d[u][i] = 1;
                                for (int g = 0; g < a; g++)
                                    for (int h = 0; h < s; h++)
                                        if (d[g][h] == 2 && !f[g][h])
                                            t += dfs(g, h);
                                d[g][h] = d[j][k] = d[u][i] = 0;
                                c = min(c, t);
                            }
    printf("%d", a * s - 3 - v - c);
}
