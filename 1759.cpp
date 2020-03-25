#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int a, s;
char d[15];
void asdf(int e, string r) {
    if ((int)r.length() == a) {
        int q = 0, w = 0;
        for (char c : r) {
            if ((c == 'a') || (c == 'e') || (c == 'i') || (c == 'o') || (c == 'u'))
                q++;
            else
                w++;
            if (q && (w > 1)) {
                cout << r << '\n';
                break;
            }
        }
        return;
    }
    if (e >= s)
        return;
    asdf(e + 1, r + d[e]);
    asdf(e + 1, r);
}
int main() {
    cin >> a >> s;
    for (int i = 0; i < s; i++)
        cin >> d[i];
    sort(d, d + s);
    asdf(0, "");
}
