#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;
int a, d;
vector<int> s;
int main() {
    scanf("%d", &a);
    s.push_back(0);
    for (int g = 0; g < a; g++) {
        scanf("%d", &d);
        if (d > s.back())
            s.push_back(d);
        else
            s[lower_bound(s.begin(), s.end(), d) - s.begin()] = d;
    }
    printf("%d", s.size() - 1);
}
