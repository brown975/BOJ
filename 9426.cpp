#include <stdio.h>
typedef long long ll;
ll a, s, d[250005], f[1000005], t;
ll asd(ll t, ll q, ll w, ll e, ll r) {
    if (r < q || q < e)
        return f[t];
    if (e == r)
        return f[t] += w;
    return f[t] = asd(t * 2, q, w, e, (e + r) / 2) + asd(t * 2 + 1, q, w, (e + r) / 2 + 1, r);
}
ll asf(ll t, ll w, ll e, ll r) {
    if (e == r)
        return e;
    if (f[t * 2] >= w)
        return asf(t * 2, w, e, (e + r) / 2);
    return asf(t * 2 + 1, w - f[t * 2], (e + r) / 2 + 1, r);
}
int main() {
    scanf("%lld%lld", &a, &s);
    for (ll g = 0; g < a; g++)
        scanf("%lld", &d[g]);
    for (ll g = 0; g < s - 1; g++)
        asd(1, d[g], 1, 0, 65535);
    for (ll g = s - 1; g < a; g++) {
        asd(1, d[g], 1, 0, 65535);
        t += asf(1, (s + 1) / 2, 0, 65535);
        asd(1, d[g - s + 1], -1, 0, 65535);
    }
    printf("%lld", t);
}
