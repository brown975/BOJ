#include <iostream>
#include <string>
#include <queue>
#include <vector>
using namespace std;
int s, d, a;
string t;
vector<pair<int, int>> z = { {-1,0},{1,0},{0,-1},{0,1} };
int main()
{
	cin >> a;
	while (a--)
	{
		cin >> s >> d;
		vector<vector<char>> f(s + 3, vector<char>(d + 3, '.'));
		vector<pair<int, int>> c[26];
		queue<pair<int, int>> q;
		bool v[26] = { false };
		int b = 0;
		for (int g = 1; g <= s; g++)
			for (int h = 1; h <= d; h++)
				cin >> f[g][h];
		cin >> t;
		if (t != "0")
			for (auto g : t)
				v[g - 97] = true;
		f[0][0] = '*';
		q.push({ 0, 0 });
		while (!q.empty()){
			pair<int, int> e = q.front();
			q.pop();
			for (auto g : z){
				int u = e.first + g.first, i = e.second + g.second;
				if ((0 <= u && u <= s + 1) && (0 <= i && i <= d + 1)) {
					if (f[u][i] == '*')
						continue;
					if (('A' <= f[u][i] && f[u][i] <= 'Z') && !v[f[u][i] - 65]) {
						c[f[u][i] - 65].push_back({ u,i });
						continue;
					}
					if (('a' <= f[u][i] && f[u][i] <= 'z') && !v[f[u][i] - 97]) {
						v[f[u][i] - 97] = true;
						for (auto sav : c[f[u][i] - 97])
							q.push({ sav.first,sav.second });
						c[f[u][i] - 97].clear();
					}
					if (f[u][i] == '$')
						b++;
					f[u][i] = '*';
					q.push({ u, i });
				}
			}
		}
		cout << b << '\n';
	}
}
