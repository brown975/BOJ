#include <stdio.h>
#include <vector>
#include <string.h>
using namespace std;
int a, f[55], r[55], t = 0;
pair<pair<int, int>, int> s[55];
vector<int> d[55];
int asdf(int e) {
    for (int g = 0; g < d[e].size(); g++) {
        if (f[d[e][g]])
            continue;
        f[d[e][g]] = 1;
        if (!r[d[e][g]] || asdf(r[d[e][g]])) {
            r[d[e][g]] = e;
            return 1;
        }
    }
    return 0;
}
int main() {
    scanf("%d", &a);
    for (int g = 1; g <= a; g++)
        scanf("%d%d%d", &s[g].first.first, &s[g].first.second, &s[g].second);
    for (int g = 1; g <= a - 1; g++)
        for (int h = g + 1; h <= a; h++)
            if (s[g].first.first == s[h].first.first && s[g].first.second == s[h].first.second && s[g].second == s[h].second)
                d[g].push_back(h);
            else if (s[g].first.first >= s[h].first.first && s[g].first.second >= s[h].first.second && s[g].second >= s[h].second)
                d[g].push_back(h);
            else if (s[g].first.first <= s[h].first.first && s[g].first.second <= s[h].first.second && s[g].second <= s[h].second)
                d[h].push_back(g);
    for (int g = 1; g <= a; memset(f, 0, sizeof(f)), g++)
        if (asdf(g))
            t++;
    for (int g = 1; g <= a; memset(f, 0, sizeof(f)), g++)
        if (asdf(g))
            t++;
    printf("%d", a - t);
}
