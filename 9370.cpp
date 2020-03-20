#include <stdio.h>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
int s, d, f, t, y, u, x,i[2010], o[2010], p[2010];
vector<pair<int, int>> v[2010];
vector<int> c;
void asdf(int h, int l[2010]) {
    priority_queue<pair<int, int>> q;
    q.push(make_pair(0, h));
    l[h] = 0;
    while (q.empty() == 0) {
        int j = -q.top().first;
        int k = q.top().second;
        q.pop();
        for (int g = 0; g < v[k].size(); g++) {
            int n = v[k][g].first;
            int m = v[k][g].second;
            if (l[n] > j + m) {
                l[n] = j + m;
                q.push(make_pair(-l[n], n));
            }
        }
    }
}
int main() {
    int a;
    scanf("%d", &a);
    while (a--) {
        for (int g = 0; g < 2010; g++) {
            v[g].clear();
            i[g] = 900000000;
            o[g] = 900000000;
            p[g] = 900000000;
        }
        c.clear();
        scanf("%d%d%d", &s, &d, &f);
        scanf("%d%d%d", &t, &y, &u);
        for (int g = 0; g < d; g++) {
            int w, e, r;
            scanf("%d%d%d", &w, &e, &r);
            v[w].push_back(make_pair(e, r));
            v[e].push_back(make_pair(w, r));
        }
        for (int g = 0; g < f; g++) {
            int w;
            scanf("%d", &w);
            c.push_back(w);
        }
        asdf(t, i);
        asdf(y, o);
        x = o[u];
        asdf(u, p);
        sort(c.begin(), c.end());
        for (int g = 0; g < c.size(); g++) {
            if (i[c[g]] == i[y] + x + p[c[g]])
                printf("%d ", c[g]);
            else if (i[c[g]] == i[u] + x + o[c[g]])
                printf("%d ", c[g]);
        }
        puts("");
    }
}
