#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
using namespace std;
int a, s, f = 0, e, r = 0;
int main() {
    scanf("%d%d", &a, &s);
    vector<int> d(a);
    for (int g = 0; g < a; g++)
        scanf("%d", &d[g]);
    sort(d.begin(), d.end(), greater<int>());
    e = d.front() - 1;
    while (1) {
        while (d[r] > e)
            f += d[r++] - e;
        if (f < s) {
            e--;
            f += r;
        }
        else
            break;
    }
    printf("%d", e);
}
