#include <stdio.h>
#include <math.h>
#include <string.h>
#include <algorithm>
using namespace std;
int a, s, f[105];
pair<int, int> d[105];
void dfs(int e) {
    f[e] = 1;
    for (int g = 1; g < s + 2; g++)    
        if (!f[g] && (abs(d[e].first - d[g].first) + abs(d[e].second - d[g].second) <= 1000))
            dfs(g);
}
int main() {
    scanf("%d", &a);
    while (a--) {
        memset(f, 0, sizeof(f));
        scanf("%d", &s);
        for (int g = 0; g < s + 2; g++)
            scanf("%d%d", &d[g].first, &d[g].second);
        dfs(0);
        printf(f[s + 1] ? "happy\n" : "sad\n");
    }
}
