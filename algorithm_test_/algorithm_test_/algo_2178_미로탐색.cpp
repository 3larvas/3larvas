////√‚√≥ : https://www.acmicpc.net/problem/2178
//#include <iostream>
//#include <queue>
//using namespace std;
//
//int map[101][101] = { 0, };
//int map_vis[101][101] = { 0, };
//int n, m = 0;
//int d_col[4] = { 1, -1, 0, 0 };
//int d_row[4] = { 0, 0, 1, -1 };
//
//void BFS() {
//	queue<pair<int, int>> q;
//	q.push(make_pair(0, 0));
//	q.push(make_pair(-1, -1));
//	map_vis[0][0] = 1;
// 	while (!q.empty()) {
//		int cur_col = q.front().first;
//		int cur_row = q.front().second;
//		if (cur_col == m - 1 && cur_row == n - 1) break;
//		for (int i = 0; i < 4; i++) {
//			int nxt_col = cur_col + d_col[i];
//			int nxt_row = cur_row + d_row[i];
//			if (nxt_col >= 0 && nxt_col <= m && nxt_row >= 0 && nxt_row <= n) {
//				if (map[nxt_row][nxt_col] == 1 && map_vis[nxt_row][nxt_col] == 0) {
//					q.push(make_pair(nxt_col, nxt_row));
//					map_vis[nxt_row][nxt_col] = map_vis[cur_row][cur_col]+1;
//				}
//			}
//		}
//		q.pop();
//	}
//	cout << map_vis[n-1][m-1];
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	cin >> n >> m;
//	string input = "";
//	for (int i = 0; i < n; i++) {
//		cin >> input;
//		for (int j = 0; j < m; j++) {
//			if (input[j]=='1') map[i][j] = 1;
//		}
//	}
//	BFS();
//	return 0;
//}