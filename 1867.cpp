#include <stdio.h>
#include <string.h>
#include <vector>
using namespace std;
vector<vector<int>> d;
int v[505], f[505], a, s, t = 0;
bool asdf(int e) {
    if (f[e])
        return false;
    f[e] = true;
    for (int g : d[e])
        if (!v[g] || asdf(v[g])) {
            v[g] = e;
            return true;
        }
    return false;
}
int main() {
    scanf("%d%d", &a, &s);
    d.resize(a + 1);
    for (int g = 0, e, r; g < s; d[e].push_back(r), g++)
        scanf("%d%d", &e, &r);
    for (int g = 1; g <= a; memset(f, 0, sizeof(f)), g++)
        if (asdf(g))
            t++;
    printf("%d", t);
}
