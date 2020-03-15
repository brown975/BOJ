#include <cstdio>
#include <algorithm>
using namespace std;
int a[20][20], s, d[20], f = 1000000000;
void solve(int e, int r) {
    if (r == s)
        return;
    if (e == s / 2) {
        int q = 0, w = 0;
        for (int g = 0; g < s; g++) {
            for (int h = 0; h < s; h++) {
                if (d[g] && d[h])
                    q += a[g][h];
                if (!d[g] && !d[h])
                    w += a[g][h];
            }
        }
        f = min(f, abs(q - w));
        return;
    }
    d[r] = true;
    solve(e + 1, r + 1);
    d[r] = false;
    solve(e, r + 1);
}

int main() {
    scanf("%d", &s);
    for (int g = 0; g < s; g++) {
        for (int h = 0; h < s; h++) {
            scanf("%d", &a[g][h]);
        }
    }
    solve(0, 0);
    printf("%d", f);
}
