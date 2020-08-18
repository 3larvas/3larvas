//// √‚√≥ : https://www.acmicpc.net/problem/10026
//#pragma warning (disable : 4996)
//#include <stdio.h>
//#include <queue>
//#include <string>
//#include <cstring>
//using namespace std;
//int N;
//int dir_r[4] = { 0,1,-1,0 };
//int dir_c[4] = { 1,0,0,-1 };
//short map[101][101];
//int map_vis[101][101];
//
//int bfs_a() {
//	int result = 0;
//	memset(map_vis, false, sizeof(map_vis));
//	for (int r = 0; r < N; r++) {
//		for (int c = 0; c < N; c++) {
//			if (map_vis[r][c] != 0) continue;
//			result++;
//			queue<pair<int, int>> q;
//			q.push(make_pair(r, c));
//			while (!q.empty()) {
//				int cur_r = q.front().first;
//				int cur_c = q.front().second;
//				q.pop();
//				map_vis[cur_r][cur_c] = result;
//				for (int i = 0; i < 4; i++) {
//					int nxt_r = cur_r + dir_r[i];
//					int nxt_c = cur_c + dir_c[i];
//					if (0 <= nxt_r && nxt_r < N && 0 <= nxt_c && nxt_c < N && map_vis[nxt_r][nxt_c] == 0) {
//						if (map[nxt_r][nxt_c] == map[cur_r][cur_c]) {
//							q.push(make_pair(nxt_r, nxt_c));
//							map_vis[nxt_r][nxt_c] = result;
//						}
//					}
//				}
//			}
//		}
//	}
//	return result;
//}
//
//int bfs_b() {
//	int result = 0;
//	for (int r = 0; r < N; r++) {
//		for (int c = 0; c < N; c++) {
//			if (map_vis[r][c] != 0) continue;
//			result++;
//			queue<pair<int, int>> q;
//			q.push(make_pair(r, c));
//			while (!q.empty()) {
//				int cur_r = q.front().first;
//				int cur_c = q.front().second;
//				q.pop();
//				map_vis[cur_r][cur_c] = result;
//				for (int i = 0; i < 4; i++) {
//					int nxt_r = cur_r + dir_r[i];
//					int nxt_c = cur_c + dir_c[i];
//					if (0 <= nxt_r && nxt_r < N && 0 <= nxt_c && nxt_c < N && map_vis[nxt_r][nxt_c] == 0) {
//						if (map[cur_r][cur_c] == 3) {
//							if (map[nxt_r][nxt_c] == map[cur_r][cur_c]) {
//								q.push(make_pair(nxt_r, nxt_c));
//								map_vis[nxt_r][nxt_c] = result;
//							}
//						}
//						else if (map[cur_r][cur_c] != 3) {
//							if (map[nxt_r][nxt_c] != 3) {
//								q.push(make_pair(nxt_r, nxt_c));
//								map_vis[nxt_r][nxt_c] = result;
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	return result;
//}
//
//
//int main() {
//	scanf("%d", &N);
//	for (int i = 0; i < N; i++) {
//		char input[101];
//		scanf("%s", input);
//		for (int j = 0; j < N; j++) {
//			char tmp_char = input[j];
//			if (tmp_char == 'R') map[i][j] = 1;
//			else if (tmp_char == 'G') map[i][j] = 2;
//			else if (tmp_char == 'B') map[i][j] = 3;
//		}
//	}
//	printf("%d %d", bfs_a(), bfs_b());
//	return 0;
//}