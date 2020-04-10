#include <stdio.h>
#include <algorithm>
#include <math.h>
using namespace std;
int a, s[9], f = 0, d = 0;
int main() {
    scanf("%d", &a);
    for (int g = 0; g < a; g++)
        scanf("%d", &s[g]);
    sort(s, s + a);
    do {
        for (int g = 1; g < a; g++)
            d += abs(s[g - 1] - s[g]);
        if (f < d)
            f = d;
        d = 0;
    } while (next_permutation(s, s + a));
    printf("%d", f);
}
