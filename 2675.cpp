#include <stdio.h>
#include <string.h>
int a, s;
char d[25];
int main() {
    scanf("%d", &a);
    while (a--) {
        scanf("%d", &s);
        scanf("%s", d);
        for (int g = 0; g < strlen(d); g++)
            for (int h = 0; h < s; h++)
                printf("%c", d[g]);
        printf("\n");
    }
}
