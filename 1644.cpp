#include <stdio.h>
#include <vector>
using namespace std;
vector<int> d;
int a, f = 0;
bool s[4000001];
int main() {
    for (int g = 2; g <= 4000000; g++)
        s[g] = true;
    for (int g = 2; g <= 4000000; g++) {
        if (!s[g])
            continue;
        d.push_back(g);
        for (int h = 2 * g; h <= 4000000; h += g)
            s[h] = false;
    }
    scanf("%d", &a);
    for (int g = 0, e, r; g < d.size(); g++) {
        e = g;
        r = 0;
        if (a < d[g])
            break;
        while ((r < a) && (e < d.size()))
            r += d[e++];
        if (r == a)
            f++;
    }
    printf("%d", f);
}
