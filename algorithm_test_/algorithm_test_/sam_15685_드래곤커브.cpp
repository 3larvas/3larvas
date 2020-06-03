////https://www.acmicpc.net/problem/15685
//#pragma warning(disable:4996)
//#include <stdio.h>
//#include <math.h>
//using namespace std;
//int N;
//struct dragon {
//	int r, c, d, g;
//};
//int map[101][101];
//int dir[1026];
//int dir_r[4] = { 0, -1, 0, 1 };
//int dir_c[4] = { 1, 0, -1, 0 };
//int max_r, max_c;
//int result;
//
//int change_dir(int dir, int idx) {
//	if (idx) {
//		if (dir == 0) return 3;
//		else return dir - 1;
//	}
//	else {
//		if (dir == 3) return 0;
//		else return dir + 1;
//	}
//}
//
//int main() {
//	for (int i = 1; i <= 10; i++) {
//		int idx_start = pow(2, i - 1) - 1;
//		int idx_end = pow(2, i) - 2;
//		int gap = idx_end - idx_start;
//		dir[idx_start] = 0;
//		for (int j = 1; j <= gap; j++) {
//			dir[idx_start + j] = !dir[idx_start - j];
//		}
//	}
//	scanf("%d", &N);
//	for (int i = 0; i < N; i++) {
//		dragon cur_d;
//		scanf("%d %d %d %d", &cur_d.c, &cur_d.r, &cur_d.d, &cur_d.g);
//		int length = pow(2, cur_d.g) + 1;
//		int nxt_r = cur_d.r;
//		int nxt_c = cur_d.c;
//		int nxt_d = cur_d.d;
//		for (int j = 0; j < length; j++) {
//			if(nxt_r>=0 && nxt_r<=100 && nxt_c >= 0 && nxt_c <= 100) map[nxt_r][nxt_c] = 1;
//			nxt_r += dir_r[nxt_d];
//			nxt_c += dir_c[nxt_d];
//			nxt_d = change_dir(nxt_d, dir[j]);
//			if (max_r < nxt_r)max_r = nxt_r;
//			if (max_c < nxt_c)max_c = nxt_c;
//		}
//	}
//	for (int i = 0; i < 100; i++) {
//		for (int j = 0; j < 100; j++) {
//			if (map[i][j] == 1 && map[i + 1][j] == 1 && map[i][j + 1] == 1 && map[i + 1][j + 1] == 1)
//				result++;
//		}
//	}
//	printf("%d", result);
//	return 0;
//}