#include <stdio.h>
#include <deque>
using namespace std;
deque<int> q;
int a, s, d, f, w = 0, e, r;
int main() {
    scanf("%d%d", &a, &s);
    while (a--)
        q.push_front(a + 1);
    for (int g = 0; g < s; g++) {
        scanf("%d", &d);
        if (q.front() == d)
            q.pop_front();
        else {
            f = 1;
            for (int g = 0; g < q.size(); g++, f++)
                if (q[g] == d)
                    break;
            e = f - 1;
            r = q.size() - f + 1;
            if (e >= r) {
                for (int h = 0; h < r; h++) {
                    q.push_front(q.back());
                    q.pop_back();
                }
                w += r;
                q.pop_front();
            }
            else {
                for (int h = 0; h < e; h++) {
                    q.push_back(q.front());
                    q.pop_front();
                }
                w += e;
                q.pop_front();
            }
        }
    }
    printf("%d", w);
}
