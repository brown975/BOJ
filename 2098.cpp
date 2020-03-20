#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
int a, s[20][20], d[20][131072], f = 2000000000;
int main() {
    scanf("%d", &a);
    for (int g = 0; g < a; g++)
        for (int h = 0; h < a; h++)
            scanf("%d", &s[g][h]);
    for (int g = 0; g < a; g++)
        for (int h = 0; h < (1 << a); h++)
            d[g][h] = -1;
    d[0][1] = 0;
    for (int g = 2; g < (1 << a); g++) {
        vector<int> r;
        for (int h = 0; h < a; h++)
            if ((g & (1 << h)) == (1 << h))
                r.push_back(h);
        for (auto h : r) {
            int e = g ^ (1 << h);
            for (int j = 0; j < a; j++) {
                if ((d[j][e] == -1) || !s[j][h])
                    continue;
                if (d[h][g] == -1)
                    d[h][g] = d[j][e] + s[j][h];
                else
                    d[h][g] = min(d[h][g], d[j][e] + s[j][h]);
            }
        }
    }
    for (int g = 1; g < a; g++) {
        if (d[g][(1 << a) - 1] == -1 || !s[g][0])
            continue;
        f = min(f, d[g][(1 << a) - 1] + s[g][0]);
    }
    printf("%d", f);
}
