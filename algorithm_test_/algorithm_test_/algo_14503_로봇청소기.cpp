// √‚√≥ : https://www.acmicpc.net/problem/14503
#include <iostream>
using namespace std;
int n, m, start_row, start_col, d;
int map[51][51];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n >> m ;
	cin >> start_row >> start_col >> d;
	for (int i = 0;  i < n * m; i++) cin >> map[i / m][i % m];
	cout << "";
	return 0;
}