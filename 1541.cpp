#include <stdio.h>
#include <math.h>
int a = 0, s[26], d = 0, g;
int main() {
    for (g = 0; scanf("%d", s + g) > 0; a++, g++);
    for (g = 0; (g < a) && (s[g] >= 0); d += s[g], g++);
    for (; g < a; d -= abs(s[g]), g++);
    printf("%d", d);
}
