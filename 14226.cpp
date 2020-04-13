#include <stdio.h>
#include <queue>
using namespace std;
int a, s[2005][2005], e, r;
queue<pair<int, int>> d;
int main() {
    scanf("%d", &a);
    d.push({ 1, 0 });
    while (!d.empty()) {
        e = d.front().first, r = d.front().second;
        d.pop();
        if (e == a) {
            printf("%d", s[e][r]);
            break;
        }
        if (!s[e][e]) {
            d.push({ e, e });
            s[e][e] = s[e][r] + 1;
        }
        if (e + r <= 2 * a && !s[e + r][r]) {
            d.push({ e + r, r });
            s[e + r][r] = s[e][r] + 1;
        }
        if (e > 0 && !s[e - 1][r]) {
            d.push({ e - 1, r });
            s[e - 1][r] = s[e][r] + 1;
        }
    }
}
