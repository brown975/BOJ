#include <stdio.h>
#include <queue>
using namespace std;
int a, s, d[100001];
queue<int> t;
int main() {
    scanf("%d%d", &a, &s);
    t.push(a);
    d[a] = 1;
    if (a == s) {
        printf("0");
        return 0;
    }
    while (1) {
        int f = t.front();
        t.pop();
        if ((f < 100000) && !d[f + 1]) {
            if (f + 1 == s) {
                printf("%d", d[f]);
                return 0;
            }
            d[f + 1] = d[f] + 1;
            t.push(f + 1);
        }
        if (f && !d[f - 1]) {
            if (f - 1 == s) {
                printf("%d", d[f]);
                return 0;
            }
            d[f - 1] = d[f] + 1;
            t.push(f - 1);
        }
        if ((f <= 50000) && !d[f * 2]) {
            if (f * 2 == s) {
                printf("%d", d[f]);
                return 0;
            }
            d[f * 2] = d[f] + 1;
            t.push(f * 2);
        }
    }
}
