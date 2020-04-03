#include <stdio.h>
typedef long long ll;
ll a, s, d, c[4000005], v[4000005];
void asdc(ll t, ll e, ll r) {
    if (!c[t])
        return;
    v[t] += (r - e + 1) * c[t];
    if (e - r) {
        c[t * 2] += c[t];
        c[t * 2 + 1] += c[t];
    }
    c[t] = 0;
}
ll asdv(ll q, ll w, ll e, ll r, ll t, ll y) {
    asdc(t, e, r);
    if (r < q || w < e)
        return v[t];
    if (q <= e && r <= w) {
        c[t] += y;
        asdc(t, e, r);
        return v[t];
    }
    return v[t] = asdv(q, w, e, (e + r) / 2, t * 2, y) + asdv(q, w, (e + r) / 2 + 1, r, t * 2 + 1, y);
}
ll asdf(ll q, ll w, ll e, ll r, ll t) {
    asdc(t, e, r);
    if (r < q || w < e)
        return 0;
    if (q <= e && r <= w)
        return v[t];
    return asdf(q, w, e, (e + r) / 2, t * 2) + asdf(q, w, (e + r) / 2 + 1, r, t * 2 + 1);
}
int main() {
    scanf("%lld%lld%lld", &a, &s, &d);
    for (ll g = 1, e; g <= a; asdv(g, g, 1, a, 1, e), g++)
        scanf("%lld", &e);
    for (ll g = 0, q, w, e, r; g < s + d; g++) {
        scanf("%lld%lld%lld", &w, &e, &r);
        if (w == 1) {
            scanf("%lld", &q);
            asdv(e, r, 1, a, 1, q);
        }
        else
            printf("%lld\n", asdf(e, r, 1, a, 1));
    }
}
