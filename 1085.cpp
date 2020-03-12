#include <stdio.h>
#include <algorithm>
using namespace std;
int a, s, d, f;
int main() {
    scanf("%d%d%d%d", &a, &s, &d, &f);
    printf("%d", min(min(d - a, a), min(f - s, s)));
}
