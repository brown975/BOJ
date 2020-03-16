#include <stdio.h>
#include <stack>
#include <string.h>
using namespace std;
int main() {
    while (1) {
        char a[105];
        scanf("%[^\n]%*c", a);
        if (!strcmp(a, "."))
            break;
        stack<char> s;
        int d = 0;
        for (int g = 0; g < strlen(a); g++) {
            if (a[g] == '(' || a[g] == '[')
                s.push(a[g]);
            else if (a[g] == ')') {
                if (!s.empty() && s.top() == '(')
                    s.pop();
                else
                    d = 1;
            }
            else if (a[g] == ']') {
                if (!s.empty() && s.top() == '[')
                    s.pop();
                else
                    d = 1;
            }
        }
        if (!s.empty() | d)
            printf("no");
        else
            printf("yes");
        puts("");
    }
}
