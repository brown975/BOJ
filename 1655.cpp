#include <stdio.h>
#include <functional>
#include <queue>
using namespace std;
int a, s;
priority_queue<int> d;
priority_queue<int, vector<int>, greater<int>> f;
int main() {
    scanf("%d", &a);
    while (a--) {
        scanf("%d", &s);
        if (d.size() > f.size())
            f.push(s);
        else
            d.push(s);
        if (f.size() && (d.top() > f.top())) {
            int e = d.top();
            int r = f.top();
            d.pop();
            f.pop();
            d.push(r);
            f.push(e);
        }
        printf("%d\n", d.top());
    }
}
