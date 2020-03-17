#include <stdio.h>
#include <queue>
using namespace std;
int a, s, d, f, v;
int main() {
    scanf("%d", &a);
    while (a--) {
        v = 0;
        queue<pair<int, int>> e;
        priority_queue<int> r;
        scanf("%d%d", &s, &d);
        for (int g = 0; g < s; g++) {
            scanf("%d", &f);
            e.push({ f,g });
            r.push(f);
        }
        while (e.size()) {
            int q = e.front().first;
            int w = e.front().second;
            e.pop();
            if (r.top() == q) {
                v++;
                r.pop();
                if (w == d)
                    break;
            }
            else
                e.push({ q,w });
        }
        printf("%d\n", v);
    }
}
