#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
int a, s;
vector<string> d, f;
int main() {
    cin >> a >> s;
    d.resize(a + s);
    for (int g = 0; g < a + s; g++)
        cin >> d[g];
    sort(d.begin(), d.end());
    for (int g = 1; g < a + s; g++)
        if (d[g] == d[g - 1])
            f.push_back(d[g]);
    printf("%d\n", f.size());
    for (int g = 0; g < f.size(); g++)
        cout << f[g] << '\n';
}
