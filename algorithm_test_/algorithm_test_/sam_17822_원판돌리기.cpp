////https://www.acmicpc.net/problem/17822
//#pragma warning(disable : 4996)
//#include <stdio.h>
//#include <queue>
//using namespace std;
//int N, M, T;
//int map[51][51];
//int rot_info[51][3];
//int dir_r[4] = { 0,0,1,-1 };
//int dir_c[4] = { 1,-1,0,0 };
//
//void shift(int row, int dir, int num) {
//	//printf("shift %d %d %d\n", row, dir, num);
//	while (num-->0) {
//		if (dir == 0) {
//			int tmp = map[row][M];
//			for (int i = M; i > 1; i--) {
//				map[row][i] = map[row][i - 1];
//			}
//			map[row][1] = tmp;
//		}
//		else {
//			int tmp = map[row][1];
//			for (int i = 1; i < M; i++) {
//				map[row][i] = map[row][i + 1];
//			}
//			map[row][M] = tmp;
//		}
//	}	
//}
//
//void rotate(int x, int d, int k) {
//	for (int i = x; i <= N; i += x) {
//		shift(i, d, k);
//	}
//}
//
//bool del_num() {
//	//printf("del_num\n");
//	//bool map_vis[51][51] = { false, };
//	bool result = false;
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= M; j++) {
//			if (map[i][j] == -1) continue;
//			//if (map_vis[i][j]) continue;
//			int cur_val = map[i][j];
//			queue<pair<int, int>> q;
//			q.push(make_pair(i, j));
//			while (!q.empty()) {
//				int cur_r = q.front().first;
//				int cur_c = q.front().second;
//				//printf("while q : %d, %d\n", cur_r, cur_c);
//				q.pop();
//				for (int idx = 0; idx < 4; idx++) {
//					int nxt_r = cur_r + dir_r[idx];
//					int nxt_c = cur_c + dir_c[idx];
//					if (nxt_r == 0) continue;
//					else if (nxt_r == N + 1) continue;
//					else if (nxt_c == 0) nxt_c = M;
//					else if (nxt_c == M + 1) nxt_c = 1;
//					if (cur_val == map[nxt_r][nxt_c]) {
//						map[cur_r][cur_c] = -1;
//						map[nxt_r][nxt_c] = -1;
//						//map_vis[cur_r][cur_c] = true;
//						//map_vis[nxt_r][nxt_c] = true;
//						q.push(make_pair(nxt_r, nxt_c));
//						result = true;
//					}
//				}
//			}
//		}
//	}
//	return result;
//}
//
//void cal_avg() {
//	//printf("cal_avg\n");
//	int cnt = 0;
//	float sum = 0.0, avg = 0.0;
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= M; j++) {
//			if (map[i][j] != -1) {
//				sum += map[i][j];
//				cnt++;
//			}
//		}
//	}
//	avg = sum / cnt;
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= M; j++) {
//			if (map[i][j] != -1) {
//				if (map[i][j] > avg)
//					map[i][j] -= 1;
//				else if (map[i][j] < avg)
//					map[i][j] += 1;
//			}
//		}
//	}
//}
//
//int main(){
//	int sum = 0;
//	scanf("%d %d %d", &N, &M, &T);
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= M; j++)
//			scanf("%d", &map[i][j]);
//	}
//	for (int i = 0; i < T; i++) {
//		int x = 0, d = 0, k = 0;
//		scanf("%d %d %d", &x, &d, &k);
//		rotate(x, d, k);
//		if (!del_num()) {
//			cal_avg();
//		}
//	}
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= M; j++) {
//			if (map[i][j] != -1)
//				sum += map[i][j];
//		}
//	}
//	printf("%d", sum);
//}
