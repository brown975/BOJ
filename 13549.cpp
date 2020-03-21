#include <stdio.h>
#include <string.h>
#include <deque>
using namespace std;
int a, s, d[100001];
deque<int> f;
int main() {
    scanf("%d%d", &a, &s);
    memset(d, -1, sizeof(d));
    f.push_back(a);
    d[a] = 0;
    while (!f.empty()) {
        int e = f.back();
        f.pop_back();
        if (e == s) {
            printf("%d", d[e]);
            break;
        }
        for (int r : {2 * e, e - 1, e + 1}) {
            if ((r < 0) || (r > 100000) || (d[r] >= 0))
                continue;
            if (r == 2 * e) {
                f.push_back(r);
                d[r] = d[e];
            }
            else {
                f.push_front(r);
                d[r] = d[e] + 1;
            }
        }
    }
}
