//// https://www.acmicpc.net/problem/9205
//#pragma warning(disable :4996)
//#include <stdio.h>
//#include <queue>
//#include <utility>
//using namespace std;
//
//#define MAX  1310
//#define HALF 32768
//
//int map[MAX][MAX];
//int dir_r[4] = { 1, -1, 0, 0 };
//int dir_c[4] = { 0, 0, 1, -1};
//queue<pair<int, int>> q;
//
//int main() {
//	int T = 0;
//	scanf("%d", &T);
//	for (int t = 0; t < T; t++) {
//		for (int i = 0; i < MAX; i++)
//			for (int j = 0; j < MAX; j++)
//				map[i][j] = 0;
//		int C = 0;
//		scanf("%d", &C);
//		int row = 0, col = 0;
//		scanf("%d %d", &col, &row);
//		row = (row + HALF) / 50;
//		col = (col + HALF) / 50;
//		map[row][col] = 20;
//		q.push(make_pair(row, col));
//		for (int c = 0; c < C; c++) {
//			scanf("%d %d", &col, &row);
//			row = (row + HALF) / 50;
//			col = (col + HALF) / 50;
//			map[row][col] = -5;
//		}
//		scanf("%d %d", &col, &row);
//		row = (row + HALF) / 50;
//		col = (col + HALF) / 50;
//		map[row][col] = -6;
//
//		bool chk = false;
//		while (!q.empty()) {
//			if (chk) break;
//			int cur_r = q.front().first;
//			int cur_c = q.front().second;
//			q.pop();
//			for (int i = 0; i < 4; i++) {
//				int nxt_r = cur_r + dir_r[i];
//				int nxt_c = cur_c + dir_c[i];
//				if (0 <= nxt_r && 0 <= nxt_c & nxt_r < MAX && nxt_c < MAX) {
//					if (map[nxt_r][nxt_c] == 0) {
//						if (map[cur_r][cur_c] > 1) {
//							map[nxt_r][nxt_c] = map[cur_r][cur_c] - 1;
//							q.push(make_pair(nxt_r, nxt_c));
//						}
//					}
//					else if (map[nxt_r][nxt_c] == -5) {
//						map[nxt_r][nxt_c] = 20;
//						q.push(make_pair(nxt_r, nxt_c));
//						
//					}
//					else if (map[nxt_r][nxt_c] == -6) {
//						for (int i = 655; i < 655 + 50; i++) {
//							for (int j = 655; j < 655 + 50; j++) {
//								printf("%2d ", map[i][j]);
//							}
//							printf("\n");
//						}
//						printf("happy\n");
//						chk = true; 
//						break;
//					}
//				}
//			}
//		}
//		if (!chk) printf("sad\n");
//		for (int i = 655; i < 655 + 50; i++) {
//			for (int j = 655; j < 655 + 50; j++) {
//				printf("%2d ", map[i][j]);
//			}
//			printf("\n");
//		}
//		
//	}
//
//
//	return 0;
//}