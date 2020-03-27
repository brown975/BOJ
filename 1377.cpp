#include <stdio.h>
#include <algorithm>
using namespace std;
int a, d = 0;
pair<int, int> s[500004];
int main() {
    scanf("%d", &a);
    for (int g = 0; g < a; g++) {
        scanf("%d", &s[g].first);
        s[g].second = g;
    }
    sort(s, s + a);
    for (int g = 0; g < a; g++)
        d = max(d, s[g].second - g);
    printf("%d", d + 1);
}
