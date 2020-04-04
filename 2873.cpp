#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int a, s, d[1005][1005], f = 10000, q, w, e, r;
string v;
int main() {
    scanf("%d%d", &a, &s);
    if (a % 2) {
        for (int g = 0; g < a; g++) {
            for (int h = 0; h < s - 1; h++)
                if (g % 2)
                    v += 'L';
                else
                    v += 'R';
            if (g != a - 1)
                v += 'D';
        }
    }
    else if (s % 2) {
        for (int g = 0; g < s; g++) {
            for (int h = 0; h < a - 1; h++)
                if (g % 2)
                    v += 'U';
                else
                    v += 'D';
            if (g != s - 1)
                v += 'R';
        }
    }
    else {
        for (int g = 0; g < a; g++)
            for (int h = 0; h < s; h++) {
                scanf("%d", &d[g][h]);
                if ((g + h) % 2 && f > d[g][h]) {
                    f = d[g][h];
                    e = g;
                    r = h;
                }
            }
        q = e % 2 ? e - 1 : e, w = r;
        for (int g = 0; g < q; g++) {
            for (int h = 0; h < s - 1; h++)
                if (g % 2)
                    v += 'L';
                else
                    v += 'R';
            v += 'D';
        }
        for (int g = 0; g < w; g++)
            if (g % 2)
                v += "UR";
            else
                v += "DR";
        for (int g = w; g < s - 1; g++)
            if (g % 2)
                v += "RU";
            else
                v += "RD";
        if (e % 2)
            q = a - e - 1;
        else
            q = a - e - 2;
        for (int g = 0; g < q; g++) {
            v += 'D';
            for (int h = 0; h < s - 1; h++)
                if (g % 2)
                    v += 'R';
                else
                    v += 'L';
        }
    }
    cout << v;
}
