#include <cstdio>
#include <string.h>
char a[1001], s[1001];
int d[1001][1001] = { 0 };
int max(int e, int r) {
    return(e > r) ? e : r;
}
int main(void) {
    scanf("%s%s", a, s);
    for (int g = 1; g <= strlen(a); g++) {
        for (int h = 1; h <= strlen(s); h++) {
            if (a[g - 1] != s[h - 1]) {
                d[g][h] = max(d[g - 1][h], d[g][h - 1]);
            }
            else {
                d[g][h] = d[g - 1][h - 1] + 1;
            }
        }
    }
    printf("%d", d[strlen(a)][strlen(s)]);
}
