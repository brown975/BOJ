#include <stdio.h>
#include <queue>
using namespace std;
priority_queue<int> a;
long long s, d;
int main() {
    scanf("%lld", &d);
    for (int g = 0, f; g < d; g++) {
        scanf("%d", &f);
        f -= g;
        a.push(f);
        if (!a.empty() && a.top() > f) {
            s += a.top() - f;
            a.pop();
            a.push(f);
        }
    }
    printf("%lld", s);
}
