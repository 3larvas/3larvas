//// √‚√≥ : https://www.acmicpc.net/problem/1389
//#pragma warning(disable : 4996)
//#include <stdio.h>
//#include <algorithm>
//using namespace std;
//
//int N, M;
//int map[101][101];
//int result = 987654321;
//int result_idx;
//
//int main() {
//	scanf("%d %d", &N, &M);
//	for (int i = 0; i < M; i++) {
//		int a = 0, b = 0;
//		scanf("%d %d", &a, &b);
//		map[a][b] = map[b][a] = 1;
//	}
//	//floyd
//	/*for (int k = 1; k <= N; k++) {
//		for (int i = 1; i <= N; i++) {
//			for (int j = 1; j <= N; j++) {
//				if (i == j) continue;
//				else if (map[i][k] != 0 && map[k][j] != 0){
//					if (map[i][j] == 0) map[i][j] = map[i][k] + map[k][j];
//					else map[i][j] = min(map[i][j], map[i][k] + map[k][j]);
//				}
//			}
//		}
//	}
//	for (int i = 1; i <= N; i++) {
//		int sum = 0;
//		for (int j = 1; j <= N; j++) sum += map[i][j];
//		if (result > sum) {
//			result = sum;
//			result_idx = i;
//		}
//	}*/
//
//	printf("%d", result_idx);
//	return 0;
//}