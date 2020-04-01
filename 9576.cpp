#include <stdio.h>
#include <algorithm>
#include <vector>
#include <string.h>
using namespace std;
int a, s, d, w[1005], t;
bool asdf(pair<int, int> e, pair<int, int> r) {
    if (e.second - r.second)
        return e.second < r.second;
    return e.first < r.first;
}
int main() {
    scanf("%d", &a);
    while (a--) {
        t = 0;
        memset(w, false, sizeof(w));
        scanf("%d%d", &s, &d);
        vector<pair<int, int>> f;
        for (int g = 0, e, r; g < d; f.push_back({ e, r }), g++)
            scanf("%d%d", &e, &r);
        sort(f.begin(), f.end(), asdf);
        for (int g = 0; g < d; g++)
            for (int h = f[g].first; h <= f[g].second; h++)
                if (!w[h]) {
                    w[h] = 1;
                    t++;
                    break;
                }
        printf("%d\n", t);
    }
}
