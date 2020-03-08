#include <stdio.h>
#include <queue>
using namespace std;
priority_queue<int> a;
int s[1000001], d, f, g;
int main() {
    scanf("%d", &d);
    for (g = 1; g <= d; g++) {
        scanf("%d", &f);
        f -= g;
        a.push(f);
        a.push(f);
        a.pop();
        s[g] = a.top();
    }
    --g;
    while (--g)
        if (g < 1000001)
            if (s[g] > s[g + 1])
                s[g] = s[g + 1];
    for (g = 1; g <= d; g++)
        printf("%d\n", s[g] + g);
}
