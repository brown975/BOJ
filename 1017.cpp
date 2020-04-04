#include <string.h>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
int a, s[51], d[2005] = { 1, 1 }, f[55], q[55], w[55], r[55][55];
vector<int> v;
bool dfs(int e) {
    if (f[e])
        return 0;
    f[e] = 1;
    for (int g = 0; g < a; g++)
        if (r[e][g])
            if (w[g] == -1 || dfs(w[g])) {
                w[g] = e;
                q[e] = g;
                return 1;
            }
    return 0;
}
int main() {
    scanf("%d", &a);
    for (int g = 2; g <= 2000; g++)
        if (!d[g])
            for (int h = 2 * g; h <= 2000; h += g)
                d[h] = 1;
    for (int g = 0; g < a; g++)
        scanf("%d", &s[g]);
    for (int g = 0; g < a; r[g][g] = 0, g++)
        for (int h = 0; h < a; h++)
            if (!d[s[g] + s[h]])
                r[g][h] = 1;
    for (int g = 0, e; g < a; g++)
        if (r[0][g]) {
            e = 2;
            memset(w, -1, sizeof(w));
            for (int h = 1; h < a; h++) {
                memset(f, 0, sizeof(f));
                f[0] = 1;
                f[g] = 1;
                q[0] = g;
                q[g] = 0;
                w[g] = 0;
                w[0] = g;
                e += dfs(h);
            }
            if (e == a)
                v.push_back(s[g]);
        }
    sort(v.begin(), v.end());
    for (auto g : v)
        printf("%d ", g);
    if (v.empty())
        printf("-1");
}
