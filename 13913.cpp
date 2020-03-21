#include <stdio.h>
#include <vector>
#include <queue>
using namespace std;
int a, s, d[100001], f[100001];
int main() {
    scanf("%d%d", &a, &s);
    queue<int> r;
    r.push(a);
    while (!r.empty()) {
        int e = r.front();
        r.pop();
        if (e == s) {
            printf("%d\n", d[e]);
            vector<int> t;
            while (e - a) {
                t.push_back(e);
                e = f[e];
            }
            t.push_back(a);
            int w = t.size();
            for (int i = 0; i < w; i++)
                printf("%d ", t[w - i - 1]);
            printf("\n");
            break;
        }
        for (int nx : {e - 1, e + 1, 2 * e}) {
            if ((nx < 0) || (nx > 100000) || d[nx])
                continue;
            r.push(nx);
            d[nx] = d[e] + 1;
            f[nx] = e;
        }
    }
}
