#include <iostream>
#include <string>
using namespace std;
int main() {
    string a;
    cin >> a;
    for (int g = 0; g < a.length(); g++) {
        if (a[g] == '0') {
            if (!g)
                cout << '0';
            else
                cout << "000";
        }
        else if (a[g] == '1') {
            if (!g)
                cout << "1";
            else
                cout << "001";
        }
        else if (a[g] == '2') {
            if (!g)
                cout << "10";
            else
                cout << "010";

        }
        else if (a[g] == '3') {
            if (!g)
                cout << "11";
            else
                cout << "011";
        }
        else if (a[g] == '4')
            cout << "100";
        else if (a[g] == '5')
            cout << "101";
        else if (a[g] == '6')
            cout << "110";
        else if (a[g] == '7')
            cout << "111";
    }
}
