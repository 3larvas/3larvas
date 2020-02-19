//// √‚√≥ : https://www.acmicpc.net/problem/13460
//#include <iostream>
//#include <queue>
//
//using namespace std;
//int n, m;
//int map[11][11];
//short map_vis[11][11][11][11] = { 0, };
//struct ball {
//	int cnt;
//	int r_col, r_row, b_col, b_row;
//};
//
//ball start;
//
//int BFS() {
//	int d_col[4] = { 0,0,1,-1 };
//	int d_row[4] = { 1,-1,0,0 };
//	map_vis[start.r_row][start.r_col][start.b_row][start.b_col] = 1;
//	queue<ball> q;
//	q.push(start);
//	int result = -1;
//	while (!q.empty()) {
//		ball cur = q.front();	
//		q.pop();
// 		if (cur.cnt > 10) break;
//		if (map[cur.r_row][cur.r_col] == 2 && map[cur.b_row][cur.b_col] != 2) {
//			result = cur.cnt;
//			break;
//		}
//		for (int i = 0; i < 4; i++) {
//			int r_nxt_col = cur.r_col;
//			int r_nxt_row = cur.r_row;
//			int b_nxt_col = cur.b_col;
//			int b_nxt_row = cur.b_row;
//			while (map[r_nxt_row + d_row[i]][r_nxt_col + d_col[i]] != 1) {
//				r_nxt_col += d_col[i];
//				r_nxt_row += d_row[i];
//				if (map[r_nxt_row][r_nxt_col] == 2)
//					break;
//			}
//			while (map[b_nxt_row + d_row[i]][b_nxt_col + d_col[i]] != 1) {
//				b_nxt_col += d_col[i];
//				b_nxt_row += d_row[i];
//				if (map[b_nxt_row][b_nxt_col] == 2) break;
//			}
//			if (map[b_nxt_row][b_nxt_col] == 2) continue;
//			if (r_nxt_col == b_nxt_col && r_nxt_row == b_nxt_row) {
//				int r_dis = abs(cur.r_col - r_nxt_col) + abs(cur.r_row - r_nxt_row);
//				int b_dis = abs(cur.b_col - b_nxt_col) + abs(cur.b_row - b_nxt_row);
//				if (r_dis < b_dis) {
//					b_nxt_col -= d_col[i];
//					b_nxt_row -= d_row[i];
//				}
//				else {
//					r_nxt_col -= d_col[i];
//					r_nxt_row -= d_row[i];
//				}
//			}			
//			if (!map_vis[r_nxt_row][r_nxt_col][b_nxt_row][b_nxt_col]) {
//				map_vis[r_nxt_row][r_nxt_col][b_nxt_row][b_nxt_col] = 1;
//				ball nxt_ball;
//				nxt_ball.r_col = r_nxt_col;
//				nxt_ball.r_row = r_nxt_row;
//				nxt_ball.b_col = b_nxt_col;
//				nxt_ball.b_row = b_nxt_row;
//				nxt_ball.cnt = cur.cnt + 1;
//				q.push(nxt_ball);
//			}
//		}
//	}
//	return result;
//}
//
//int main() {	
//	cin >> n >> m;
//	for (int i = 0; i < n; i++) {
//		string input;
//		cin >> input;
//		for (int j = 0; j < m; j++) {
//			if (input[j] == '.') map[i][j] = 0;
//			else if (input[j] == '#') map[i][j] = 1;
//			else if (input[j] == 'O') {
//				map[i][j] = 2;
//			}
//			else if (input[j] == 'R') {
//				map[i][j] = 0;
//				start.r_col = j;
//				start.r_row = i;
//			}
//			else if (input[j] == 'B') {
//				map[i][j] = 0;
//				start.b_col = j;
//				start.b_row = i;
//			}
//		}
//	}
//	start.cnt = 0;
//	cout << BFS();
//	return 0;
//}
//
