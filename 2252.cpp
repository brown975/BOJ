#include <stdio.h>
#include <vector>
#include <queue>
using namespace std;
int a, s, t[32005];
vector<vector<int>> d;
priority_queue<int> f;
int main() {
    scanf("%d%d", &a, &s);
    d.resize(a + 1);
    for (int g = 0, e, r; g < s; g++) {
        scanf("%d%d", &e, &r);
        d[e].push_back(r);
        t[r]++;
    }
    for (int g = 1; g <= a; g++)
        if (!t[g])
            f.push(-g);
    while (f.size()) {
        int e = -f.top();
        f.pop();
        printf("%d ", e);
        for (int g = 0; g < d[e].size(); g++) {
            t[d[e][g]]--;
            if (!t[d[e][g]])
                f.push(-d[e][g]);
        }
    }
}
