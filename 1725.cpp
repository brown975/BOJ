#include <stdio.h>
#include <stack>
#include <algorithm>
using namespace std;
stack<int> d;
int a, s[100005], f = 0, t;
int main() {
    scanf("%d", &a);
    for (int g = 0; g < a; g++)
        scanf("%d", &s[g]);
    for (int g = 0; g <= a; g++) {
        while ((!d.empty()) && (s[d.top()] > s[g])) {
            t = d.top();
            d.pop();
            f = max(f, s[t] * (g - (d.empty() ? 0 : d.top() + 1)));
        }
        d.push(g);
    }
    printf("%d", f);
}
