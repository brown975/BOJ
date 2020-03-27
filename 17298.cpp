#include <stdio.h>
#include <stack>
using namespace std;
int a, s[1000005], f[1000005];
stack<int> d;
int main() {
    scanf("%d", &a);
    for (int g = 0; g < a; g++)
        scanf("%d", &s[g]);
    for (int g = a - 1; g + 1; g--) {
        while (!d.empty() && d.top() <= s[g])
            d.pop();
        if (d.empty())
            f[g] = -1;
        else
            f[g] = d.top();
        d.push(s[g]);
    }
    for (int g = 0; g < a; g++)
        printf("%d ", f[g]);
}
