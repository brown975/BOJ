#include <stdio.h>
#include <algorithm>
using namespace std;
int a, s[1001], d[1001], f;
int main() {
    scanf("%d", &a);
    for (int g = 0; g < a; d[g] = s[g], g++)
        scanf("%d", &s[g]);
    for (int g = 0; g < a; f = max(d[g], f), g++)
        for (int h = 0; h < g; h++)
            if (s[g] > s[h])
                d[g] = max(d[h] + s[g], d[g]);
    printf("%d", f);
}
