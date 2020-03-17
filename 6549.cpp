#include <stdio.h>
#include <stack>
#include <algorithm>
using namespace std;
int a, s[100001];
int main() {
    while (1) {
        scanf("%d", &a);
        if (!a)
            break;
        stack<long long> d;
        long long f = 0;
        for (int g = 0; g < a; g++) {
            scanf("%d", &s[g]);
            while (!d.empty() && (s[d.top()] > s[g])) {
                long long h = s[d.top()], e = g;
                d.pop();
                if (!d.empty())
                    e = g - d.top() - 1;
                f = max(f, (long long)h * e);
            }
            d.push(g);
        }
        while (!d.empty()) {
            long long h = s[d.top()], e = a;
            d.pop();
            if (!d.empty())
                e = a - d.top() - 1;
            f = max(f, h * e);
        }
        printf("%lld\n", f);
    }
}
