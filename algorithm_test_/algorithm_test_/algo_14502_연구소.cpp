// √‚√≥ : https://www.acmicpc.net/problem/14502
#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, m;
	cin >> n >> m;
	int map[9][9] = { 0, };
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> map[i][j];
		}
	}
	return 0;
}