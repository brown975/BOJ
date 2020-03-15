#include <stdio.h>
#include <algorithm>
using namespace std;
int a, d, f;
pair<int,int> s[100002];
int main() {
    scanf("%d", &a);
    for (int g = 0; g < a; g++)
        scanf("%d%d", &s[g].second, &s[g].first);
    sort(s, s + a);
    d = s[0].first;
    f = 1;
    for (int g = 1; g < a; g++) {
        if (s[g].second >= d) {
            f++;
            d = s[g].first;
        }
    }
    printf("%d", f);
}
