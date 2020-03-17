#include <algorithm>
#include <stdio.h>
#include <stack>
#include <queue>
using namespace std;
int a, s, r = 1;
queue<int> d, e;
stack<int> f;
int main() {
    scanf("%d", &a);
    for (int g = 0; g < a; d.push(s), g++)
        scanf("%d", &s);
    while (d.size()) {
        if (f.size() && (f.top() == d.front())) {
            f.pop();
            d.pop();
            e.push(1);
        }
        else if (r <= d.front()) {
            while (r <= d.front()) {
                f.push(r++);
                e.push(0);
            }
        }
        else {
            printf("NO");
            return 0;
        }
    }
    while (e.size()) {
        printf("%c\n", e.front() * 2 + 43);
        e.pop();
    }
}
