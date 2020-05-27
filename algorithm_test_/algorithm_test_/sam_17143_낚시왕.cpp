//// https://www.acmicpc.net/problem/17143
//#pragma warning (disable:4996)
//#include <stdio.h>
//using namespace std;
//
//int R, C, M, cnt;
//struct shark {
//	int d, v, size;
//};
//shark map[101][101];
//int dir_r[5] = { 0, -1,1, 0, 0, };
//int dir_c[5] = { 0, 0, 0, 1, -1 };
//shark emp_shark;
//int main() {
//	scanf("%d %d %d", &R, &C, &M);
//	for (int i = 1; i <= M; i++){
//		shark tmp;
//		int r = 0, c = 0;
//		scanf("%d %d %d %d %d", &r, &c, &tmp.v, &tmp.d, &tmp.size );
//		map[r][c] = tmp;
//	}
//	for (int master_idx = 1; master_idx <= C; master_idx++) {
//		/*printf("Before remove==========\n");
//		for (int i = 1; i <= R; i++) {
//			for (int j = 1; j <= C; j++) {
//				printf("%d", map[i][j].d);
//			}
//			printf("\n");
//		}*/
//		//remove shark
//		for (int i = 1; i <= R; i++) {
//			if (map[i][master_idx].d != 0) {
//				cnt += map[i][master_idx].size;
//				map[i][master_idx] = emp_shark;
//				break;
//			}
//		}
//		/*printf("Before move==========\n");
//		for (int i = 1; i <= R; i++) {
//			for (int j = 1; j <= C; j++) {
//				printf("%d", map[i][j].d);
//			}
//			printf("\n");
//		}*/
//		//move shark
//		shark map_tmp[101][101] = { emp_shark, };
//		for (int r = 1; r <= R; r++) {
//			for (int c = 1; c <= C; c++) {
//				if (map[r][c].d != 0) {
//					shark cur_shark = map[r][c];
//					map[r][c] = emp_shark;
//					int nxt_r = r + dir_r[cur_shark.d] * cur_shark.v;
//					int nxt_c = c + dir_c[cur_shark.d] * cur_shark.v;
//					while (nxt_r < 1 || nxt_r > R || nxt_c < 1 || nxt_c > C) {
//						if (nxt_r > R) {
//							nxt_r = 2 * R - nxt_r;
//							cur_shark.d = 1;
//						}
//						else if (nxt_r < 1) {
//							nxt_r = nxt_r * (-1) + 2;
//							cur_shark.d = 2;
//						}
//						else if (nxt_c > C) {
//							nxt_c = 2 * C - nxt_c;
//							cur_shark.d = 4;
//						}
//						else if (nxt_c < 1) {
//							nxt_c = nxt_c * (-1) + 2;
//							cur_shark.d = 3;
//						}
//					}
//					if (map_tmp[nxt_r][nxt_c].d == 0) {
//						map_tmp[nxt_r][nxt_c] = cur_shark;
//					}
//					else {
//						shark cmp_shark = map_tmp[nxt_r][nxt_c];
//						if (cmp_shark.size < cur_shark.size) {
//							map_tmp[nxt_r][nxt_c] = cur_shark;
//						}
//					}	
//				}
//			}
//		}
//		for (int i = 1; i <= R; i++) {
//			for (int j = 1; j <= C; j++) {
//				map[i][j] = map_tmp[i][j];
//			}
//		}
//		/*printf("After move===========\n");
//		for (int i = 1; i <= R; i++) {
//			for (int j = 1; j <= C; j++) {
//				printf("%d", map[i][j].d);
//			}
//			printf("\n");
//		}
//		printf("turn : %d	cnt : %d \n", master_idx, cnt);*/
//	}
//	printf("%d", cnt);
//	return 0;
//}