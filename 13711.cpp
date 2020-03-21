#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;
int a, s, d[100001], f[100001], e;
vector<int> r;
int main() {
    scanf("%d", &a);
    for (int g = 1; g <= a; d[s] = g, g++)
        scanf("%d", &s);
    for (int g = 1; g <= a; g++)
        scanf("%d", &f[g]);
    r.push_back(-200000);
    for (int g = 1; g <= a; g++)
        if (r.back() < d[f[g]]) {
            r.push_back(d[f[g]]);
            e++;
        }
        else
            *lower_bound(r.begin(), r.end(), d[f[g]]) = d[f[g]];
    printf("%d", e);
}
