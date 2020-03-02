#include <stdio.h>
#include <algorithm>
using namespace std;
int a;
int main() {
	scanf("%d", &a);
	printf("%d", (a % 2) ? (a / 2 + 1) * (a / 2 + 2) : (a / 2 + 1) * (a / 2 + 1));
}
