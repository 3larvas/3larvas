//// https://www.acmicpc.net/problem/9205
//#pragma warning(disable :4996)
//#include <stdio.h>
//#include <queue>
//#define BASE  32768
//#define BOUND 65537
//using namespace std;
//int dir_r[4] = { 0, 0, 1, -1 };
//int dir_c[4] = { 1, -1, 0, 0 };
//pair<long, long>  map[65537][65537];
//
//int T;
//queue<pair<int, int>> q;
//
//int main() {
//	scanf("%d", &T);
//	while (T-- > 0) {
//		long n=0,r=0,c=0;
//		scanf("%d", &n);
//		scanf("%d %d", &c, &r);
//		map[r + BASE][c + BASE].first  = 20 * 50;
//		map[r + BASE][c + BASE].second = 20;
//		q.push(make_pair(r + BASE, c + BASE));
//		for (int i = 0; i < n; i++) {
//			scanf("%d %d", &c, &r);
//			map[r + BASE][c + BASE].first = -1;
//		}
//		scanf("%d %d", &c, &r);
//		map[r + BASE][c + BASE].first = -2;
//	}
//	while (!q.empty()) {
//		int cur_r = q.front().first;
//		int cur_c = q.front().second;
//		q.pop();
//		
//		for (int i = 0; i < 4; i++) {
//			int nxt_r = cur_r + dir_r[i];
//			int nxt_c = cur_c + dir_c[i];
//			if (0 <= nxt_r && nxt_r < BOUND && 0 <= nxt_c && nxt_c < BOUND && map[nxt_r][nxt_c].first != 0) {
//				q.push(make_pair(nxt_r, nxt_c));
//				map[nxt_r][nxt_c].first = map[cur_r][cur_c].first - 1;
//				if (map[nxt_r][nxt_c].first / 50 < map[cur_r][cur_c].second) map[nxt_r][nxt_c].second  = map[cur_r][cur_c].first - 1;
//			}
//
//		}
//		for (int i = BASE - 10; i < BASE - 10; i++) {
//			for (int j = BASE - 10; j < BASE - 10; j++) {
//				printf("%d ", map[i][j]);
//			}
//			printf("\n");
//		}
//
//	}
//	return 0;
//}