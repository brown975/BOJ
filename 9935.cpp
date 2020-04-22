#include <iostream>
#include <string>
using namespace std;
string a, s;
int d[1000005], f = 0;
int main() {
    cin >> a >> s;
    for (int g = 0, e; g < a.length(); g++) {
        e = 1;
        d[f++] = a[g];
        if (d[f - 1] == s[s.length() - 1] && f >= s.length()) {
            for (int h = 0; h < s.length(); h++)
                if (d[f - h - 1] != s[s.length() - h - 1]) {
                    e = 0;
                    break;
                }
            if (e)
                f -= s.length();
        }
    }
    if (!f)
        printf("FRULA\n");
    else
        for (int g = 0; g < f; g++)
            printf("%c", d[g]);
}
