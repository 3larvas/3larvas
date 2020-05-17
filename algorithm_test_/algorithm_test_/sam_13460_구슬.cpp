//// https://www.acmicpc.net/problem/13460
//#pragma warning (disable : 4996)
//#include <stdio.h>
//#include <queue>
//using namespace std;
//
//int n, m;
//char  map[11][11];
//int   arr_map[11][11];
//bool  arr_vis[11][11][11][11];
//int dir_x[4] = { 0, 0, 1, -1 };
//int dir_y[4] = { 1, -1, 0, 0 };
//
//struct ball_info{
//	int cnt = 0;
//	int red_x, red_y, blu_x, blu_y;
//};
//
//queue<ball_info> q;
//ball_info start;
//int result = -1;
//
//int BFS() {
//	arr_vis[start.red_x][start.red_y][start.blu_x][start.blu_y] = 1;
//	q.push(start);
//	while (!q.empty()) {
//		ball_info cur_ball = q.front();
//		q.pop();
//		if (cur_ball.cnt > 10) return -1;
//		if (arr_map[cur_ball.red_y][cur_ball.red_x] == 2 && arr_map[cur_ball.blu_y][cur_ball.blu_x] != 2) {
//			result = cur_ball.cnt;
//			break;
//		}
//		for (int i = 0; i < 4; i++) {
//			int nxt_red_x = cur_ball.red_x;
//			int nxt_red_y = cur_ball.red_y;
//			int nxt_blu_x = cur_ball.blu_x;
//			int nxt_blu_y = cur_ball.blu_y;
//			while (arr_map[nxt_red_y + dir_y[i]][nxt_red_x + dir_x[i]] != 1) {
//				nxt_red_x += dir_x[i];
//				nxt_red_y += dir_y[i];
//				if (arr_map[nxt_red_y][nxt_red_x] == 2) break;
//			}
//			while (arr_map[nxt_blu_y + dir_y[i]][nxt_blu_x + dir_x[i]] != 1) {
//				nxt_blu_x += dir_x[i];
//				nxt_blu_y += dir_y[i];
//				if (arr_map[nxt_blu_y][nxt_blu_x] == 2) break;
//			}
//			if (arr_map[nxt_blu_y][nxt_blu_x] == 2) continue;
//			if ((nxt_blu_x == nxt_red_x) && (nxt_blu_y == nxt_red_y)) {
//				int r_dis = abs(cur_ball.red_y - nxt_red_y) + abs(cur_ball.red_x - nxt_red_x);
//				int b_dis = abs(cur_ball.blu_y - nxt_blu_y) + abs(cur_ball.blu_x - nxt_blu_x);
//				if (r_dis < b_dis) {
//					nxt_blu_x -= dir_x[i];
//					nxt_blu_y -= dir_y[i];
//				}
//				else {
//					nxt_red_x -= dir_x[i];
//					nxt_red_y -= dir_y[i];
//				}
//			}
//
//			if (!arr_vis[nxt_red_x][nxt_red_y][nxt_blu_x][nxt_blu_y]) {
//				arr_vis[nxt_red_x][nxt_red_y][nxt_blu_x][nxt_blu_y] = true;
//				ball_info nxt_ball;
//				nxt_ball.red_x = nxt_red_x;
//				nxt_ball.red_y = nxt_red_y;
//				nxt_ball.blu_x = nxt_blu_x;
//				nxt_ball.blu_y = nxt_blu_y;
//				nxt_ball.cnt = cur_ball.cnt + 1;
//				q.push(nxt_ball);
//			}
//		}
//	}
//	return result;
//}
//
//int main() {
//	scanf("%d %d", &n, &m);
//	for (int i = 0; i < n; i++) {
//		scanf("%s", &map[i][0]);
//		for (int j = 0; j < m; j++) {
//			switch(map[i][j]) {
//			case '.':
//				arr_map[i][j] = 0;
//				break;
//			case '#':
//				arr_map[i][j] = 1;
//				break;
//			case 'O':
//				arr_map[i][j] = 2;
//				break;
//			case 'R':
//				arr_map[i][j] = 3;
//				start.red_x = j;
//				start.red_y = i;
//				break;
//			case 'B':
//				arr_map[i][j] = 4;
//				start.blu_x = j;
//				start.blu_y = i;
//				break;
//			}
//		}
//	}
//	printf("%d", BFS());
//	return 0;
//}