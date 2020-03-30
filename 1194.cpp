#include <stdio.h>
#include <queue>
using namespace std;
int a, s, u, i, v[50][50][64], o[] = { -1, 0, 1, 0 }, p[] = { 0, 1, 0, -1 };
queue<pair<pair<int, int>, int>> q;
char d[50][50];
int main() {
    scanf("%d%d", &a, &s);
    for (int g = 0; g < a; g++) {
        scanf("%s", d[g]);
        for (int h = 0; h < s; h++)
            if (d[g][h] == '0')
                u = g, i = h;
    }
    q.push({ {u, i}, 0 });
    while (!q.empty()) {
        int w = q.front().first.first, e = q.front().first.second, r = q.front().second;
        q.pop();
        if (d[w][e] == '1') {
            printf("%d", v[w][e][r]);
            return 0;
        }
        for (int g = 0; g < 4; g++) {
            int f = r;
            if ((w + o[g] >= 0) && (w + o[g] < a) && (e + p[g] >= 0) && (e + p[g] < s)) {
                if ('a' <= d[w + o[g]][e + p[g]] && d[w + o[g]][e + p[g]] <= 'f')
                    f |= (1 << (d[w + o[g]][e + p[g]] - 'a'));
                else if (('A' <= d[w + o[g]][e + p[g]]) && (d[w + o[g]][e + p[g]] <= 'F') && !(f & (1 << (d[w + o[g]][e + p[g]] - 'A'))))
                    continue;
                if ((v[w + o[g]][e + p[g]][f]) || (d[w + o[g]][e + p[g]] == '#'))
                    continue;
                q.push({ {w + o[g],  e + p[g]}, f });
                v[w + o[g]][e + p[g]][f] = v[w][e][r] + 1;
            }
        }
    }
    printf("-1");
}
