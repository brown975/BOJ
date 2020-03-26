#include <stdio.h>
#include <math.h>
#include <utility>
using namespace std;
int a;
pair<int, int> s[10005];
long long d;
int main() {
    scanf("%d", &a);
    for (int g = 0; g < a; g++)
        scanf("%d%d", &s[g].first, &s[g].second);
    for (int g = 1; g < a; g++)
        d += ((long long)s[g - 1].first * s[g].second - (long long)s[g].first * s[g - 1].second);
    d += ((long long)s[a - 1].first * s[0].second - (long long)s[a - 1].second * s[0].first);
    printf("%.1lf", abs(d) / 2.0);
}
