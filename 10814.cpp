#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
int a, h;
char v[105];
bool least(pair<int, string> e, pair<int, string> r) {
    return e.first < r.first;
}
int main() {
    scanf("%d", &a);
    vector<pair<int, string>> s(a);
    for (int g = 0; g < a; g++) {
        scanf("%d%s", &h, v);
        s[g].first = h;
        string t(v);
        s[g].second = t;
    }
    stable_sort(s.begin(), s.end(), least);
    for (int g = 0; g < a; g++)
        printf("%d %s\n", s[g].first, s[g].second.c_str());
}
