#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
using namespace std;
int a, s[51], d[51][500005];
int main() {
    scanf("%d", &a);
    for (int g = 1; g <= a; g++)
        scanf("%d", &s[g]);
    memset(d, -1, sizeof(d));
    d[0][0] = 0;
    for (int g = 1; g <= a; g++)
        for (int h = 0; h <= 500000; h++) {
            d[g][h] = d[g - 1][h];
            if (h - s[g] >= 0 && d[g - 1][h - s[g]] + 1)
                d[g][h] = max(d[g][h], d[g - 1][h - s[g]] + s[g]);
            if (s[g] - h >= 0 && d[g - 1][s[g] - h] + 1)
                d[g][h] = max(d[g][h], d[g - 1][s[g] - h] + h);
            if (h + s[g] <= 500005 && d[g - 1][h + s[g]] + 1)
                d[g][h] = max(d[g][h], d[g - 1][h + s[g]]);
        }
    printf("%d", d[a][0] ? d[a][0] : -1);
}
