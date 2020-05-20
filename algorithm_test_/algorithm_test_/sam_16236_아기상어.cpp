//// https://www.acmicpc.net/problem/16236
//#pragma warning(disable : 4996)
//#include <stdio.h>
//#include <queue>
//using namespace std;
//
//int n;
//int map[21][21];
//int dir_x[4] = { 0, 0, 1, -1 };
//int dir_y[4] = { 1, -1, 0, 0 };
//
//struct shark {
//	int map[21][21];
//	int lv = 2;
//	int x = 0;
//	int y = 0;
//	int cnt = 0;
//	int time = 0;
//};
//
//shark baby;
//queue<shark> q;
//int result;
//
//bool chk_fish(shark cur_baby) {
//	for (int i = 0; i < n * n; i++) {
//		if (cur_baby.map[i / n][i % n] != 0) {
//			if (cur_baby.map[i / n][i % n] == 9) continue;
//			return false;
//		}
//	}
//	return true;
//}
//
//void BFS() {
//	while (!q.empty()) {
//		shark cur_baby = q.front();
//		q.pop();
//		if (chk_fish(cur_baby)) {
//			result = cur_baby.time;
//			break;
//		}
//		for (int i = 0; i < 4; i++) {
//			int nxt_x = cur_baby.x + dir_x[i];
//			int nxt_y = cur_baby.y + dir_y[i];
//			if ((nxt_x >= 0) && (nxt_y >= 0) && (nxt_x < n) && (nxt_y < n) && (cur_baby.map[nxt_y][nxt_x]<=cur_baby.lv)) {
//				shark nxt_baby = cur_baby;
//				nxt_baby.x = nxt_x;
//				nxt_baby.y = nxt_y;
//				nxt_baby.time = cur_baby.time + 1;
//				if (cur_baby.map[nxt_y][nxt_x] >= 1 && cur_baby.map[nxt_y][nxt_x] < cur_baby.lv) {
//					nxt_baby.cnt = cur_baby.cnt + 1;
//					if (nxt_baby.cnt == nxt_baby.lv) {
//						nxt_baby.lv++;
//						nxt_baby.cnt = 0;
//					}
//				}
//				nxt_baby.map[cur_baby.y][cur_baby.x] = 0;
//				nxt_baby.map[nxt_y][nxt_x] = 9;
//				q.push(nxt_baby);
//			}
//		}
//	}
//}
//
//int main() {
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			int input;
//			scanf("%d", &input);
//			baby.map[i][j] = input;
//			if (input == 9) {
//				baby.x = j;
//				baby.y= i;
//			}
//		}
//	}
//	q.push(baby);
//	BFS();
//	printf("%d", result);
//	return 0;
//}
//
