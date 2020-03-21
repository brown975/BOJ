#include <stdio.h>
#include <queue>
using namespace std;
int a, s, d[100001];
int main() {
    scanf("%d%d", &a, &s);
    queue<int> r;
    r.push(a);
    int q = 0, w = 0;
    while (!w) {
        int e = r.size();
        while (e--) {
            int t = r.front();
            r.pop();
            if (t == s)
                w++;
            for (int v : {t - 1, t + 1, 2 * t}) {
                if ((v < 0) || (v > 100000) || (d[v] && (d[v] != d[t] + 1)))
                    continue;
                r.push(v);
                d[v] = d[t] + 1;
            }
        }
        q++;
    }
    printf("%d\n%d", q - 1, w);
}
