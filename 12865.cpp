#include <stdio.h>
#include <algorithm>
using namespace std;
int a, s, d[101], f[101], e[100001];
int main() {
    scanf("%d%d", &a, &s);
    for (int i = 1; i <= a; i++)
        scanf("%d%d", &d[i], &f[i]);
    for (int i = 1; i <= a; i++)
        for (int j = s; j > 0; j--)
            if (d[i] <= j)
                e[j] = max(e[j], e[j - d[i]] + f[i]);
    printf("%d", e[s]);
}
