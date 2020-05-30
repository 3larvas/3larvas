//// https://www.acmicpc.net/problem/16234
//#pragma warning (disable: 4996)
//#include <stdio.h>
//#include <math.h>
//#include<queue>
//using namespace std;
//int N, L, R;
//int map[51][51];
//int lable_idx = 1;
//int dir_r[2] = { 0, 1 };
//int dir_c[2] = { 1, 0 };
//int map_lable[51][51];
//queue<pair<int, int>> q_list[51*51];
//int result_final;
//
//void change_lable(int idx, int target) {
//	while (!q_list[target].empty()) {
//		int cur_r = q_list[target].front().first;
//		int cur_c = q_list[target].front().second;
//		map_lable[cur_r][cur_c] = idx;
//		q_list[idx].push(make_pair(cur_r, cur_c));
//		q_list[target].pop();	
//	}
//}
//
//int main() {
//	scanf("%d %d %d", &N, &L, &R);
//	for (int i = 0; i < N; i++)
//		for (int j = 0; j < N; j++)
//			scanf("%d", &map[i][j]);
//	while (true) {
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j < N; j++) {
//				for (int k = 0; k < 2; k++) {
//					int nxt_r = i + dir_r[k];
//					int nxt_c = j + dir_c[k];
//					if (nxt_r < N && nxt_c < N) {
//						int gap = abs(map[i][j] - map[nxt_r][nxt_c]);
//						if (L <= gap && gap <= R) {
//							if (map_lable[i][j] == 0) {
//								if (map_lable[nxt_r][nxt_c] == 0) {
//									map_lable[i][j] = lable_idx;
//									map_lable[nxt_r][nxt_c] = lable_idx;
//									q_list[lable_idx].push(make_pair(i, j));
//									q_list[lable_idx].push(make_pair(nxt_r, nxt_c));
//									lable_idx++;
//								}
//								else {
//									q_list[map_lable[nxt_r][nxt_c]].push(make_pair(i, j));
//									map_lable[i][j] = map_lable[nxt_r][nxt_c];
//								}
//							}
//							else {
//								if (map_lable[nxt_r][nxt_c] == 0) {
//									map_lable[nxt_r][nxt_c] = map_lable[i][j];
//									q_list[map_lable[i][j]].push(make_pair(nxt_r, nxt_c));
//								}
//								else if (map_lable[nxt_r][nxt_c] == map_lable[i][j]) {}
//								else {
//									if (map_lable[i][j] <= map_lable[nxt_r][nxt_c]) {
//										change_lable(map_lable[i][j], map_lable[nxt_r][nxt_c]);
//									}
//									else {
//										change_lable(map_lable[nxt_r][nxt_c], map_lable[i][j]);
//									}
//								}
//							}
//						}
//					}
//				}
//			}
//		}
//		int result_cnt = 0;
//		for (int idx = 1; idx <= lable_idx; idx++) {
//			if (!q_list[idx].empty()) {
//				result_cnt++;
//				queue<pair<int, int>> tmp_q = q_list[idx];
//				int sum = 0, result = 0;
//				int size = q_list[idx].size();
//				while (!q_list[idx].empty()) {
//					sum += map[q_list[idx].front().first][q_list[idx].front().second];
//					q_list[idx].pop();
//				}
//				result = sum / size;
//				while (!tmp_q.empty()) {
//					map[tmp_q.front().first][tmp_q.front().second] = result;
//					map_lable[tmp_q.front().first][tmp_q.front().second] = 0;
//					tmp_q.pop();
//				}
//			}
//		}
//		if (result_cnt == 0) break;
//		result_final++;
//		lable_idx = 1;
//	}
//	printf("%d", result_final);
//	return 0;
//}