#include <stdio.h>
#include <algorithm>
using namespace std;
int a, s[1000005], d[1000005], f = 0;
int main() {
    scanf("%d", &a);
    for (int g = 0; g < a; g++)
        scanf("%d", &s[g]);
    d[f] = s[0];
    for (int g = 1; g < a; g++)
        if (d[f] < s[g])
            d[++f] = s[g];
        else
            d[lower_bound(d, d + f, s[g]) - d] = s[g];
    printf("%d", f + 1);
}
