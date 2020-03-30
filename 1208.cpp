#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;
int a, s, d[50];
long long f;
vector<int> e, r;
void asdf(int q, int w, int t) {
    w += d[q];
    if (t)
        if (q >= a)
            return;
    if (!t)
        if (q >= a / 2)
            return;
    if (w == s)
        f++;
    if (t)
        r.push_back(w);
    if (!t)
        e.push_back(w);
    asdf(q + 1, w - d[q], t);
    asdf(q + 1, w, t);
}
int main() {
    scanf("%d%d", &a, &s);
    for (int g = 0; g < a; g++)
        scanf("%d", &d[g]);
    asdf(0, 0, 0);
    asdf(a / 2, 0, 1);
    sort(e.begin(), e.end());
    sort(r.begin(), r.end());
    for (int g = 0; g < e.size(); g++)
        f += upper_bound(r.begin(), r.end(), s - e[g]) - lower_bound(r.begin(), r.end(), s - e[g]);
    printf("%lld", f);
}
