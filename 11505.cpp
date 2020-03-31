#include <stdio.h>
typedef long long ll;
ll a, s, d, f[4000005];
ll update(ll q, ll w, ll e, ll r, ll t) {
    if ((r < q) || (q < e))
        return f[t];
    if (e == r)
        return f[t] = w;
    return f[t] = (update(q, w, e, (e + r) / 2, t * 2) * update(q, w, (e + r) / 2 + 1, r, t * 2 + 1)) % 1000000007;
}
ll query(ll q, ll w, ll e, ll r, ll t) {
    if ((r < q) || (w < e))
        return 1;
    if ((q <= e) && (r <= w))
        return f[t];
    return (query(q, w, e, (e + r) / 2, t * 2) * query(q, w, (e + r) / 2 + 1, r, t * 2 + 1)) % 1000000007;
}
int main() {
    scanf("%lld%lld%lld", &a, &s, &d);
    for (ll g = 1, e; g <= a; update(g, e, 1, a, 1), g++)
        scanf("%lld", &e);
    for (ll g = 0, w, e, r; g < s + d; g++) {
        scanf("%lld%lld%lld", &w, &e, &r);
        if (w == 1)
            update(e, r, 1, a, 1);
        else
            printf("%lld\n", query(e, r, 1, a, 1));
    }
}
