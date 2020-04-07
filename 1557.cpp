#include <stdio.h>
#include <algorithm>
using namespace std;
typedef long long ll;
ll a, s[100005], w, e, r;
int main() {
    scanf("%lld", &a);
    fill(s + 1, s + 100005, 1);
    for (ll g = 2; g * g <= 100000; g++) {
        if (s[g] == 1) { 
            for (ll h = g; h <= 100000; h += g)
                s[h] *= -g;
            for (ll h = g * g; h <= 100000; h += g * g)
                s[h] = 0;
        }
    }
    for (ll g = 2; g <= 100000; g++) {
        if (s[g] == g)
            s[g] = 1;
        else if (s[g] == -g)
            s[g] = -1;
        else if (s[g] < 0)
            s[g] = 1;
        else if (s[g] > 0)
            s[g] = -1;
    }
    e = 1, r = 2000000000;
    while (e < r) {
        w = 0;
        for (ll g = 1; g * g <= (e + r) / 2; g++)
            w += s[g] * ((e + r) / 2 / (g * g));
        if (w > a)
            r = (e + r) / 2 - 1;
        else if (w == a)
            r = (e + r) / 2;
        else
            e = (e + r) / 2 + 1;
    }
    printf("%lld", e);
}
