//// https://www.acmicpc.net/problem/2468
//#pragma warning(disable : 4996)
//#include <stdio.h>
//#include <queue>
//using namespace std;
//
//int N, map[101][101];
//int min_h = 101, max_h = 0;
//int dir_r[4] = { 1, -1, 0, 0 };
//int dir_c[4] = { 0, 0, 1, -1 };
//bool map_vis[101][101] = { false, };
//bool map_vis_empty[101][101] = { false, };
//int result;
//
//void DFS(int cur_r, int cur_c, int rain_h) {
//	for (int i = 0; i < 4; i++) {
//		int nxt_r = cur_r + dir_r[i];
//		int nxt_c = cur_c + dir_c[i];
//		if (nxt_r >= 0 && nxt_r < N && nxt_c >= 0 && nxt_c < N && !map_vis[nxt_r][nxt_c] && map[nxt_r][nxt_c] > rain_h) {
//			map_vis[nxt_r][nxt_c] = true;
//			DFS(nxt_r, nxt_c, rain_h);
//		}
//	}
//}
//
//int main() {
//	scanf("%d", &N);
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			int input = 0;
//			scanf("%d", &input);
//			map[i][j] = input;
//			if (min_h > input) min_h = input;
//			if (max_h < input) max_h = input;
//		}
//	}
//	for (int idx = min_h; idx < max_h; idx++) {
//		int cnt = 0;
//		for (int r = 0; r < N; r++) {
//			for (int c = 0; c < N; c++) {
//				if (!map_vis[r][c] && map[r][c]>idx) {
//					map_vis[r][c] = true;
//					cnt++;
//					DFS(r, c, idx);
//				}
//			}
//		}
//		if (result < cnt) result = cnt;
//		copy(&map_vis_empty[0][0], &map_vis_empty[0][0] + (101 * 101), &map_vis[0][0]);
//	}
//	if (result == 0) printf("1");
//	else printf("%d", result);
//	return 0;
//}
//
//
