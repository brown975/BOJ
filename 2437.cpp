#include <stdio.h>
#include <algorithm>
using namespace std;
int a, s[1005], d;
int main() {
    scanf("%d", &a);
    for (int g = 0; g < a; g++)
        scanf("%d", &s[g]);
    sort(s, s + a);
    for (int g = 0; g < a; d += s[g++])
        if (s[g] > d + 1)
            break;
    printf("%d", d + 1);
}
