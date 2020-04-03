#include <stdio.h>
#include <algorithm>
#include <math.h>
#include <vector>
using namespace std;
typedef long long ll;
#define asd(w, e, r) (e.first - w.first) * (r.second - w.second) - (e.second - w.second) * (r.first - w.first)
#define asdf(e, r) sqrt((e.first - r.first) * (e.first - r.first) + (e.second - r.second) * (e.second - r.second))
ll a, d;
pair<ll,ll> s[100002];
double f = -1;
vector<pair<ll,ll>> v;
bool ac(pair<ll,ll> e, pair<ll,ll> r) {
    return e.first < r.first || e.first == r.first && e.second < r.second;
}
bool av(pair<ll, ll> e, pair<ll, ll> r) {
    ll w = asd(s[0], e, r);
    if (w > 0)
        return 1;
    if (w < 0)
        return 0;
    else {
        if (asdf(s[0], e) < asdf(s[0], r))
            return 1;
        else
            return 0;
    }
}
int main() {
    scanf("%lld", &a);
    for (ll g = 0; g < a; g++)
        scanf("%lld%lld", &s[g].first, &s[g].second);
    sort(s, s + a, ac);
    sort(s + 1, s + a, av);
    v.push_back(s[0]);
    v.push_back(s[1]);
    for (ll g = 2; g < a; g++) {
        while (v.size() >= 2 && asd(v[v.size() - 2], v.back(), s[g]) <= 0)
            v.pop_back();
        v.push_back(s[g]);
    }
    d = v.size();
    for (ll g = 0; g < d; g++)
        for (ll h = g + 1; h < d; h++)
            f = max(f, asdf(v[g], v[h]));
    printf("%.6f", f);
}
