#include <stdio.h>
#include <stack>
#include <string.h>
using namespace std;
char a[105];
stack<char> s;
int asdf(char e) {
    if (e == '(')
        return 0;
    else if (e == '+' || e == '-')
        return 1;
    else if (e == '*' || e == '/')
        return 2;
}
int main() {
    scanf("%s", a);
    for (int g = 0; g < strlen(a); g++) {
        if ('A' <= a[g] && a[g] <= 'Z')
            printf("%c", a[g]);
        else if (a[g] == '(')
            s.push(a[g]);
        else if (a[g] == ')') {
            while (s.top() - '(') {
                printf("%c", s.top());
                s.pop();
            }
            s.pop();
        }
        else {
            while (!s.empty() && asdf(s.top()) >= asdf(a[g])) {
                printf("%c", s.top());
                s.pop();
            }
            s.push(a[g]);
        }
    }
    while (!s.empty()) {
        printf("%c", s.top());
        s.pop();
    }
}
