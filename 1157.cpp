#include <stdio.h>
#include <string.h>
int a, s[27], f = 0;
char d[1000005];
int main() {
    scanf("%s", d);
    a = strlen(d);
    s[26] = 0;
    for (int g = 0; g < a; g++) {
        if (d[g] > 96)
            d[g] -= 32;
        d[g] -= 65;
        s[d[g]]++;
    }
    a = 26;
    for (int g = 0; g < 26; g++) {
        if (s[g] > s[a]) {
            a = g;
            f = 0;
        }
        else if (s[g] == s[a]) {
            f = 1;
        }
    }
    if (f)
        printf("?");
    else
        printf("%c", a + 65);
}
