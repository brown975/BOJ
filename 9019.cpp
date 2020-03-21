#include <stdio.h>
#include <string.h>
#include <queue>
#include <vector>
using namespace std;
int s, d, z[10000], c[10000], v[10000];
int main() {
    int a;
    scanf("%d", &a);
    while (a--) {
        scanf("%d%d", &s, &d);
        memset(z, false, sizeof(z));
        queue<int> r;
        r.push(s);
        while (!r.empty()) {
            int x = r.front();
            r.pop();
            if (x == d) {
                vector<char> e;
                int f = x;
                while (f != s) {
                    e.push_back(v[f]);
                    f = c[f];
                }
                int w = e.size();
                for (int g = 0; g < w; g++)
                    printf("%c", e[w - g - 1]);
                printf("\n");
                break;
            }
            int nx[] = { x * 2 % 10000, x - 1, x % 1000 * 10 + x / 1000, x / 10 + x % 10 * 1000 };
            if (nx[1] < 0)
                nx[1] = 9999;
            for (int g = 0; g < 4; g++) {
                char C[] = "DSLR";
                if (z[nx[g]])
                    continue;
                z[nx[g]] = true;
                c[nx[g]] = x;
                v[nx[g]] = C[g];
                r.push(nx[g]);
            }
        }
    }
}
