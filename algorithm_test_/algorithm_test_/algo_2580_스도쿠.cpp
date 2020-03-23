//// √‚√≥ : https://www.acmicpc.net/problem/2580
//#pragma warning (disable : 4996)
//#include <cstdio>
//#include <stdlib.h>
//
//#define arr_size 9
//
//int map[9][9];
//bool row[9][9];
//bool col[9][9];
//bool squ[9][9];
//
//void DFS(int idx) {
//	if (idx == 81) {
//		for (int i = 0; i < arr_size ; i++) {
//			for (int j = 0; j < arr_size; j++) {
//				printf("%d ", map[i][j]);
//			}
//			printf("\n");			
//		}
//		exit(0);
//	}	
//	int row_idx = idx / arr_size;
//	int col_idx = idx % arr_size;
//	if (map[row_idx][col_idx] == 0) {
//		for (int i = 1; i <= arr_size; i++) {
//			if (!row[row_idx][i] && !col[col_idx][i] && !squ[row_idx / 3 * 3 + col_idx / 3][i]) {
//				row[row_idx][i] = true;
//				col[col_idx][i] = true;
//				squ[row_idx / 3 * 3 + col_idx / 3][i] = true;
//				map[row_idx][col_idx] = i;
//				DFS(idx + 1);
//				row[row_idx][i] = false;
//				col[col_idx][i] = false;
//				squ[row_idx / 3 * 3 + col_idx / 3][i] = false;
//				map[row_idx][col_idx] = 0;
//			}
//		}
//	}
//	else DFS(idx + 1);
//}
//
//int main() {
//	for (int i = 0; i < arr_size; i++){
//		for (int j = 0; j < arr_size; j++){
//			scanf("%d", &map[i][j]);
//			if (map[i][j] != 0) {
//				row[i][map[i][j]] = true;
//				col[j][map[i][j]] = true;
//				squ[i / 3 * 3 + j / 3][map[i][j]] = true;
//			}
//		}
//	}
//	DFS(0);	
//	return 0;
//}