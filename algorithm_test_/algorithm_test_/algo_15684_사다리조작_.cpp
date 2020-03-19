//// √‚√≥ : https://www.acmicpc.net/problem/15684
//#pragma warning(disable:4996)
//#include <cstdio>
//
//int n, m, h;
//int map[30][10];
//
//bool search() {
//	for (int i = 1; i <= n; i++) {
//		int cur_idx_m = 1;
//		int cur_idx_n = i;
//		while (cur_idx_m != h + 1) {
//			if (map[cur_idx_m][cur_idx_n] == 1) {
//				cur_idx_n += 1;
//			}
//			else if (map[cur_idx_m][cur_idx_n] == 2) {
//				cur_idx_n -= 1;
//			}
//			cur_idx_m++;
//		}
//		//printf("end : cur_idx_n : %d \n", cur_idx_n);
//		if (cur_idx_n != i) return false;
//	}
//}
//
//bool add_line(int cur_row, int cur_col, int cnt, int mode) {
//	for (int i = (cur_row-1) * n + cur_col; i <= h * n; i++) {
//		int idx_row = (i-1) / n+1;
//		int idx_col = (i-1) % n+1;
//		if (idx_col==n) continue;
//		if (map[idx_row][idx_col] == 0 && map[idx_row][idx_col + 1] == 0 && idx_col + 1 <= n) {
//			map[idx_row][idx_col] = 1;
//			map[idx_row][idx_col + 1] = 2;
//			if (cnt == 0) {
//				if (!search()) {
//					map[idx_row][idx_col] = 0;
//					map[idx_row][idx_col + 1] = 0;
//					continue;
//				}
//				printf("%d", mode);
//				return true;
//			}
//			else if (add_line(idx_row, idx_col, cnt - 1, mode)) return true;
//			map[idx_row][idx_col] = 0;
//			map[idx_row][idx_col + 1] = 0;
//		}
//		else i++;
//	}
//	return false;	
//}
//
//int main() {
//	scanf("%d %d %d", &n, &m, &h);
//	for (int i = 0; i < m; i++) {
//		int a=0, b = 0;
//		scanf("%d %d", &a, &b);
//		map[a][b] = 1;
//		map[a][b+1] = 2;
//	}
//	if (search()){
//		printf("0");
//		return 0;
//	}
//	if (add_line(1, 1, 0, 1))return 0;
//	if (add_line(1, 1, 1, 2))return 0;
//	if (add_line(1, 1, 2, 3))return 0;
//
//	printf("-1");
//	return 0;
//}