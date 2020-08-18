//// √‚√≥ : https://www.acmicpc.net/problem/15671
//#pragma warning(disable : 4996)
//#include <stdio.h>
//#include <queue>
//#define MAX 7
//using namespace std;
//
//char map[MAX][MAX]
//= {
//	{'.','.','.','.','.','.','.'},
//	{'.','.','.','.','.','.','.'},
//	{'.','.','.','.','.','.','.'},
//	{'.','.','.','W','B','.','.'},
//	{'.','.','.','B','W','.','.'},
//	{'.','.','.','.','.','.','.'},
//	{'.','.','.','.','.','.','.'}
//	};
//int dir_r[8]     = {  0, 0, 1,-1, 1,-1, 1,-1 };
//int dir_c[8]     = {  1,-1, 0, 0, 1, 1,-1,-1 };
//int dir_rev_r[8] = {  0, 0,-1, 1,-1, 1,-1, 1 };
//int dir_rev_c[8] = { -1, 1, 0, 0,-1,-1, 1, 1 };
//
//int main() {
//	int T = 0;
//	scanf("%d", &T);
//	for (int t = 0; t < T; t++) {
//		queue<pair<int, int>> q;
//		int r = 0, c = 0;
//		scanf("%d %d", &r, &c);
//		char input = 'B';
//		if (t % 2 != 0)
//			input = 'W';
//		map[r][c] = input;
//		q.push(make_pair(r, c));
//		while (!q.empty()) {
//			int cur_r = q.front().first;
//			int cur_c = q.front().second;
//			q.pop();
//			for (int i = 0; i < 8; i++) {
//				int nxt_r = cur_r + dir_r[i];
//				int nxt_c = cur_c + dir_c[i];
//				if (0 < nxt_r && nxt_r < MAX && 0 < nxt_c && nxt_c < MAX) {
//					if (map[cur_r][cur_c] == 'B') {
//						if (map[nxt_r][nxt_c] == 'W') {
//							while (map[nxt_r][nxt_c] == 'W') {
//								nxt_r += dir_r[i];
//								nxt_c += dir_c[i];
//							}
//							if (map[nxt_r][nxt_c] == 'B') {
//								while (true) {
//									nxt_r += dir_rev_r[i];
//									nxt_c += dir_rev_c[i];
//									if (nxt_r == cur_r && nxt_c == cur_c) break;
//									map[nxt_r][nxt_c] = 'B';
//									q.push(make_pair(nxt_r, nxt_c));
//								}
//							}
//						}
//					}
//					if (map[cur_r][cur_c] == 'W') {
//						if (map[nxt_r][nxt_c] == 'B') {
//							while (map[nxt_r][nxt_c] == 'B') {
//								nxt_r += dir_r[i];
//								nxt_c += dir_c[i];
//							}
//							if (map[nxt_r][nxt_c] == 'W') {
//								while (true) {
//									nxt_r += dir_rev_r[i];
//									nxt_c += dir_rev_c[i];
//									if (nxt_r == cur_r && nxt_c == cur_c) break;
//									map[nxt_r][nxt_c] = 'W';
//									q.push(make_pair(nxt_r, nxt_c));
//								}
//							}
//						}
//					}
//				}
//			}
//		}
//		for (int i = 1; i < MAX; i++) {
//			for (int j = 1; j < MAX; j++) {
//				printf("%c", map[i][j]);
//			}
//			printf("\n");
//		}
//	}
//	for (int i = 1; i < MAX; i++) {
//		for (int j = 1; j < MAX; j++) {
//			printf("%c", map[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}