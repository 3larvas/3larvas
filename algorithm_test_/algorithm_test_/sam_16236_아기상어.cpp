//// https://www.acmicpc.net/problem/16236
//#pragma warning(disable : 4996)
//#include <stdio.h>
//#include <queue>
//#include <vector>
//using namespace std;
//
//int n;
//int map[21][21];
//int map_vis[21][21];
//int dir_x[4] = { 0, -1, 1, 0 };
//int dir_y[4] = { -1, 0, 0, 1 };
//
//struct shark {
//	//int map[21][21];
//	int lv = 2;
//	int x = 0;
//	int y = 0;
//	int cnt = 0;
//	//int time = 0;
//};
//
//shark step;
//shark baby;
//queue<shark> q;
//int result;
//int time = 0;
//
//bool chk_fish(shark cur_baby) {
//	int cur_lv = cur_baby.lv;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			if ((cur_baby.map[i][j] != 0) && (cur_baby.map[i][j] < cur_lv)) {
//				return false;
//			}
//		}		
//	}
//	return true;
//}
//
//void BFS() {
//	while (!q.empty()) {
//		shark cur_baby = q.front();
//		shark new_baby;
//		int min_y = 21, min_x = 21;
//		q.pop();
//		if (cur_baby.lv == -1) {
//			if (chk_fish(q.front())) {
//				result = time;
//				break;
//			}
//			vector<shark> tmp_v;
//			for (int j = 0; j < n * n; j++)
//				map_vis[j / n][j % n] = 0;
//			while (!q.empty()) {
//				tmp_v.push_back(q.front());
//				q.pop();
//			}
//			for (int i = 0; i < tmp_v.size(); i++) {
//				shark tmp_baby = tmp_v.at(i);
//				if ((min_y > tmp_baby.y) || ((min_y >= tmp_baby.y) && (min_x > tmp_baby.x))) {
//					min_y = tmp_baby.y;
//					min_x = tmp_baby.x;
//					new_baby = tmp_baby;
//
//					if (map[tmp_baby.y][tmp_baby.x] >= 1 && map[tmp_baby.y][tmp_baby.x] < tmp_baby.lv) {
//						tmp_baby.cnt = tmp_baby.cnt + 1;
//						if (tmp_baby.cnt == tmp_baby.lv) {
//							tmp_baby.lv++;
//							tmp_baby.cnt = 0;
//						}
//						map[tmp_baby.y][tmp_baby.x] = 0;
//					}
//				}
//				tmp_v.at(i) = tmp_baby;
//			}
//			if (min_y == 21 && min_x == 21) {
//				for (int i = 0; i < tmp_v.size(); i++) {
//					q.push(tmp_v.at(i));
//				}
//			}
//			else {
//				q.push(new_baby);
//			}
//			q.push(step);
//			continue;
//		}
//		map_vis[cur_baby.y][cur_baby.x] = true;		
//		for (int i = 0; i < 4; i++) {
//			time = time + 1;
//			int nxt_x = cur_baby.x + dir_x[i];
//			int nxt_y = cur_baby.y + dir_y[i];
//			if ((nxt_x >= 0) && (nxt_y >= 0) && (nxt_x < n) && (nxt_y < n) && (map[nxt_y][nxt_x]<=cur_baby.lv)) {
//				if (!map_vis[nxt_y][nxt_x]) {
//					map_vis[nxt_y][nxt_x] = true;
//					shark nxt_baby = cur_baby;
//					nxt_baby.x = nxt_x;
//					nxt_baby.y = nxt_y;					
//					q.push(nxt_baby);
//				}
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
//			map[i][j] = input;
//			if (input == 9) {
//				baby.x = j;
//				baby.y = i;
//				map[i][j] = 0;
//			}
//		}
//	}
//	step.lv = -1;
//	q.push(baby);
//	q.push(step);
//	BFS();
//	printf("%d", result-1);
//	return 0;
//}
//
