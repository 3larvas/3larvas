//// √‚√≥ : https://www.acmicpc.net/problem/14503
//#include <iostream>
//using namespace std;
//
//void clean(int cur_col, int cur_row, int dir);
//void scan(int cur_col, int cur_row, int dir);
//
//int n, m, start_row, start_col, d;
//int map[51][51];
//int dir_col[4] = { 0, 1, 0, -1 };
//int dir_row[4] = { -1, 0, 1, 0 };
//int result;
//
//void clean(int cur_col, int cur_row, int dir) {
//	map[cur_row][cur_col] = 2;
//	result += 1;
//	scan(cur_col, cur_row, dir);	
//}
//
//void scan(int cur_col, int cur_row, int dir) {
//	bool chk = false;
//	for (int i = 0; i < 4; i++) {
//		if (dir == 0) dir = 3;
//		else dir -= 1;
//		int nxt_col = cur_col + dir_col[dir];
//		int nxt_row = cur_row + dir_row[dir];
//		if (nxt_col >= 0 && nxt_col < m && nxt_row >= 0 && nxt_row < n) {
//			if (map[nxt_row][nxt_col] == 0) {
//				clean(nxt_col, nxt_row, dir);
//				chk = true;
//				break;
//			}
//		}
//	}
//	if (!chk) {
//		if (map[cur_row - dir_row[dir]][cur_col - dir_col[dir]] != 1) {
//			scan(cur_col - dir_col[dir], cur_row - dir_row[dir], dir);
//		}
//		else {
//			cout << result;
//			return;
//		}
//	}
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	cin >> n >> m ;
//	cin >> start_row >> start_col >> d;
//	for (int i = 0;  i < n * m; i++) cin >> map[i / m][i % m];
//	clean(start_col, start_row, d);
//	return 0;
//}