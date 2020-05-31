//// https://www.acmicpc.net/problem/3055
//#pragma warning(disable:4996)
//#include <stdio.h>
//#include <queue>
//using namespace std;
//
//int dir_r[4] = { 0, 0, 1, -1 };
//int dir_c[4] = { 1, -1, 0, 0 };
//queue<pair<int, int>> q_water;
//queue<pair<int, int>> q_go;
//int R, C, cnt;
//int map[50][50];
//
//int BFS() {
//	while (!q_water.empty()) {
//		int cur_r = q_water.front().first;
//		int cur_c = q_water.front().second;
//		q_water.pop();
//		if (cur_r == -1) {
//			/*printf("----------------------\n");
//			for (int i = 0; i < R; i++) {
//				for (int j = 0; j < C; j++) {
//					printf("%d", map[i][j]);
//				}
//				printf("\n");
//			}*/
//			if (q_go.size() == 1 && q_go.front().first == -1) return -1;
//			while (!q_go.empty()) {
//				int cur_go_r = q_go.front().first;
//				int cur_go_c = q_go.front().second;
//				q_go.pop();
//				if (cur_go_r == -1) {
//					cnt++;
//					q_go.push(make_pair(-1, -1));
//					break;
//				}
//				for (int i = 0; i < 4; i++) {
//					int nxt_go_r = cur_go_r + dir_r[i];
//					int nxt_go_c = cur_go_c + dir_c[i];
//					if (nxt_go_r >= 0 && nxt_go_r < R && nxt_go_c >= 0 && nxt_go_c < C && (map[nxt_go_r][nxt_go_c] == 0 || map[nxt_go_r][nxt_go_c] == 2)) {
//						if (map[nxt_go_r][nxt_go_c] == 2) return cnt;
//						map[nxt_go_r][nxt_go_c] = 4;
//						q_go.push(make_pair(nxt_go_r, nxt_go_c));
//					}
//				}
//				/*printf("cnt : %d --------------\n", cnt);
//				for (int i = 0; i < R; i++) {
//					for (int j = 0; j < C; j++) {
//						printf("%d", map[i][j]);
//					}
//					printf("\n");
//				}*/
//			}
//			q_water.push(make_pair(-1, -1));
//			continue;
//		}
//		for (int i = 0; i < 4; i++) {
//			int nxt_r = cur_r + dir_r[i];
//			int nxt_c = cur_c + dir_c[i];
//			if (nxt_r >= 0 && nxt_r < R && nxt_c >= 0 && nxt_c < C
//				&& map[nxt_r][nxt_c] != 3 && map[nxt_r][nxt_c] != 2 && map[nxt_r][nxt_c] != 1) {
//				map[nxt_r][nxt_c] = 1;
//				q_water.push(make_pair(nxt_r, nxt_c));
//			}
//		}
//		
//	}
//	return -1;
//}
//
//int main() {
//	scanf("%d %d", &R, &C);
//	for (int i = 0; i < R; i++) {
//		char input[50];
//		scanf("%s", input);
//		for (int j = 0; j < C; j++) {
//			
//			switch (input[j]) {
//			case '.':
//				map[i][j] = 0;
//				break;
//			case '*':
//				map[i][j] = 1;
//				q_water.push(make_pair(i, j));
//				break;
//			case 'D':
//				map[i][j] = 2;
//				break;
//			case 'X':
//				map[i][j] = 3;
//				break;
//			case 'S':
//				q_go.push(make_pair(i, j));
//				map[i][j] = 4;
//				break;
//			}
//		}
//	}
//	q_water.push(make_pair(-1, -1));
//	q_go.push(make_pair(-1, -1));
//	int result = BFS();
//	if (result == -1) printf("KAKTUS");
//	else printf("%d", result+1);
//	
//	return 0;
//}