#include <stdio.h>
#include <algorithm>
#include <queue>
#include <set>
using namespace std;
int a, s;
long long d;
priority_queue<pair<int, int>> f;
multiset<int> t;
int main() {
    scanf("%d%d", &a, &s);
    for (int g = 0, e, r; g < a; g++) {
        scanf("%d%d", &e, &r);
        f.push({ r,e });
    }
    for (int g = 0, e; g < s; g++) {
        scanf("%d", &e);
        t.insert(e);
    }
    while (f.size()) {
        int q = f.top().first, w = f.top().second;
        f.pop();
        if (t.lower_bound(w) == t.end())
            continue;
        t.erase(t.lower_bound(w));
        d += q;
    }
    printf("%lld", d);
}
