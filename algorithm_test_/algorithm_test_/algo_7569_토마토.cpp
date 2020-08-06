////√‚√≥ : https://www.acmicpc.net/problem/7569
//#pragma warning(disable : 4996)
//#include <stdio.h>
//#include <queue>
//#include <tuple>
//using namespace std;
//int m, n, h, result;
//int map[101][101][101];
//int dir_r[6] = { 0, 0, 0, 0, 1, -1 };
//int dir_c[6] = { 0, 0, 1, -1, 0, 0 };
//int dir_h[6] = { 1, -1, 0, 0, 0, 0 };
//queue<tuple<int, int, int>> q;
//
//int main() {
//	scanf("%d %d %d", &m, &n, &h);
//	for (int i = 0; i < h; i++) {
//		for (int j = 0; j < n; j++) {
//			for (int k = 0; k < m; k++) {
//				scanf("%d", &map[i][j][k]);
//				if (map[i][j][k] == 1)
//					q.push(make_tuple(i, j, k));
//			}
//		}
//	}
//	while (!q.empty()) {
//		int cur_h = get<0>(q.front());
//		int cur_r = get<1>(q.front());
//		int cur_c = get<2>(q.front());
//		q.pop();
//		for (int i = 0; i < 6; i++) {
//			int nxt_h = cur_h + dir_h[i];
//			int nxt_r = cur_r + dir_r[i];
//			int nxt_c = cur_c + dir_c[i];
//			if (0 <= nxt_h && 0 <= nxt_r && 0 <= nxt_c && nxt_h < h && nxt_r < n && nxt_c < m) {
//				if (map[nxt_h][nxt_r][nxt_c] == 0) {
//					q.push(make_tuple(nxt_h, nxt_r, nxt_c));
//					map[nxt_h][nxt_r][nxt_c] = map[cur_h][cur_r][cur_c] + 1;
//					result = map[nxt_h][nxt_r][nxt_c];
//				}
//			}
//		}
//	}
//	for (int i = 0; i < h; i++) {
//		for (int j = 0; j < n; j++) {
//			for (int k = 0; k < m; k++) {
//				if (map[i][j][k] == 0) {
//					printf("-1");
//					return 0;
//				}
//			}
//		}
//	}
//	if(result==0) printf("0");
//	else printf("%d", result-1);
//	return 0;
//}