//#pragma warning(disable : 4996)
//#include <stdio.h>
//#include <queue>
//using namespace std;
//int R, C, T;
//int map[51][51];
//queue<pair<int, int>> q;
//int air_row;
//int dir_r[4] = { 0,0,-1,1 };
//int dir_c[4] = { -1,1,0,0 };
//
//int main() {
//	int t_cnt = 0;
//	int result = 0;
//	scanf("%d %d %d", &R, &C, &T);
//	for (int i = 0; i < R; i++) {
//		for (int j = 0; j < C; j++) {
//			int input = 0;
//			scanf("%d", &input);
//			map[i][j] = input;
//			if (input > 0) {
//				q.push(make_pair(i, j));
//			}
//			else if (input == -1) {
//				air_row = i;
//			}
//		}
//	}
//	q.push(make_pair(-1, -1));
//	int tmp_map[51][51] = {};
//	while (!q.empty()) {
//		if (t_cnt == T)
//			break;
//		pair<int, int> cur_pos = q.front();
//		q.pop();
//		if (cur_pos.first == -1) {
//			t_cnt++;
//			// circulation air
//			for (int i = air_row-2 ; i > 0; i--) {
//				tmp_map[i][0] = tmp_map[i - 1][0];
//			}
//			for (int i = 0; i < C-1; i++) {
//				tmp_map[0][i] = tmp_map[0][i+1];
//			}
//			for (int i = 0; i < air_row - 1; i++) {
//				tmp_map[i][C-1] = tmp_map[i + 1][C - 1];
//			}
//			for (int i = C-1; i > 1; i--) {
//				tmp_map[air_row-1][i] = tmp_map[air_row - 1][i - 1];
//			}
//			tmp_map[air_row - 1][1] = 0;
//			//
//			for (int i = air_row + 1; i < R-1; i++) {
//				tmp_map[i][0] = tmp_map[i + 1][0];
//			}
//			for (int i = 0; i < C - 1; i++) {
//				tmp_map[R - 1][i] = tmp_map[R - 1][i + 1];
//			}
//			for (int i = R - 1; i > air_row ; i--) {
//				tmp_map[i][C - 1] = tmp_map[i - 1][C - 1];
//			}
//			for (int i = C - 1; i > 1; i--) {
//				tmp_map[air_row][i] = tmp_map[air_row][i - 1];
//			}
//			tmp_map[air_row][1] = 0;
//
//			for (int i = 0; i < R; i++) {
//				for (int j = 0; j < C; j++) {
//					map[i][j] = 0;
//					if (tmp_map[i][j] != 0) {
//						q.push(make_pair(i, j));
//						map[i][j] = tmp_map[i][j];
//						tmp_map[i][j] = 0;
//					}
//				}
//			}
//			map[air_row-1][0] = 0;
//			map[air_row][0] = 0;
//			q.push(make_pair(-1, -1));
//			continue;
//		}
//		int cnt = 0;
//		int div_val = map[cur_pos.first][cur_pos.second] / 5;
//		for (int i = 0; i < 4; i++) {
//			int nxt_row = cur_pos.first  + dir_r[i];
//			int nxt_col = cur_pos.second + dir_c[i];
//			if (nxt_row >= 0 && nxt_col >= 0 && nxt_row < R && nxt_col < C) {
//				if (map[nxt_row][nxt_col] != -1) {
//					tmp_map[nxt_row][nxt_col] += div_val;
//					cnt++;
//				}
//			}
//		}
//		tmp_map[cur_pos.first][cur_pos.second] += map[cur_pos.first][cur_pos.second] - div_val * cnt;
//	}
//	for (int i = 0; i < R; i++) {
//		for (int j = 0; j < C; j++) {
//			result += map[i][j];
//		}
//	}
//	printf("%d", result);
//	return 0;
//}