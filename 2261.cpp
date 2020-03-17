#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pl4;
pl4 a[500005];
int n;
#define as(e, r) (e.first - r.first) * (e.first - r.first) + (e.second - r.second) * (e.second - r.second)
bool asd(pl4 e, pl4 r) {
    if (e.second - r.second)
        return e.second < r.second;
    else
        return e.first < r.first;
}
ll asdf(pl4* w, int e, int r) {
    if (r == e + 1)
        return 1000000000000;
    int t = (e + r) / 2;
    ll q = min(asdf(w, e, t), asdf(w, t, r)), c = w[t].first;
    vector<pl4> v;
    for (int g = e; g < r; g++)
        if ((w[g].first - c) * (w[g].first - c) <= q)
            v.push_back(w[g]);
    sort(v.begin(), v.end(), asd);
    for (int g = 0; g < v.size(); g++)
        for (int j = g + 1; (j < v.size()) & (j < g + 7); j++)
            q = min(q, as(v[g], v[j]));
    return q;
}
int main() {
    scanf("%d", &n);
    for (int g = 0; g < n; g++)
        scanf("%lld %lld", &a[g].first, &a[g].second);
    sort(a, a + n);
    printf("%lld", asdf(a, 0, n));
}
