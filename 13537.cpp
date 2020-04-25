#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
struct as {
    ll y, u, g, o, p;
};
ll a, s, c;
vector<ll> d, v, t;
vector<as> f;
void asdf(ll e, ll r) {
    e += c;
    v[e] = r;
    for (e /= 2; e > 0; e /= 2)
        v[e] = v[e * 2] + v[e * 2 + 1];
}
ll asf(ll e, ll r) {
    ll w = 0;
    for (e += c, r += c; e <= r; e /= 2, r /= 2) {
        if (e % 2) {
            w += v[e];
            e++;
        }
        if (r % 2 == 0) {
            w += v[r];
            r--;
        }
    }
    return w;
}
bool asd(as g, as b) {
    if (g.p == b.p)
        return g.y < b.y;
    else
        return g.p < b.p;
}
int main() {
    scanf("%lld", &a);
    d.resize(a + 1);
    v.resize(1 << 21);
    for (c = 1; c <= a; c *= 2);
    for (ll g = 1; g <= a; g++) {
        scanf("%lld", &d[g]);
        f.push_back({ 1,g,0,0,d[g] });
    }
    scanf("%lld", &s);
    t.resize(s + 1);
    for (ll g = 1; g <= s; g++) {
        ll w, e, r;
        scanf("%lld%lld%lld", &w, &e, &r);
        f.push_back({ 2,g,w,e,r });
    }
    sort(f.begin(), f.end(), asd);
    for (ll g = 0; g < a + s; g++) {
        if (f.back().y == 1)
            asdf(f.back().u, 1);
        else if (f.back().y == 2)
            t[f.back().u] = asf(f.back().g, f.back().o);
        f.pop_back();
    }
    for (ll g = 1; g <= s; g++)
        printf("%lld\n", t[g]);
}
