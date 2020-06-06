//// https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5V4A46AdIDFAWu&categoryId=AV5V4A46AdIDFAWu&categoryType=CODE
//#pragma warning(disable : 4996)
//#include <stdio.h>
//#include <queue>{
//using namespace std;
//
//struct Worker {
//	int r, start_c, end_c, val;
//	int hny_arr[11];
//};
//int T;
//int map[11][11];
//int map_empty[11][11];
//
//void findMax(int arr[], int size) {
//	int hny_arr[11];
//	for (int i = 0; i < 11; i++) hny_arr[i] = arr[i];
//
//
//}
//
//int main() {
//	scanf("%d", &T);
//	while (T > 0){
//		T--;
//		int N, M, C;
//		scanf("%d %d %d", &N, &M, &C);
//		for (int r = 0; r < N; r++) {
//			for (int c = 0; c < N; c++) {
//				scanf("%d", &map[r][c]);
//			}
//		}
//		for (int r = 0; r < N; r++) {
//			for (int c = 0; c+(M-1) < N; c++) {
//				Worker worker_1;
//				worker_1.r = r;
//				worker_1.start_c = c;
//				worker_1.end_c = c+(M-1);
//				int sum = 0;
//				for (int i = worker_1.start_c; i <= worker_1.end_c; i++) {
//					worker_1.hny_arr[i] = map[r][i];
//					sum += map[r][i];
//					worker_1.val += pow(map[r][i], 2);
//				}
//				if (sum > C) {
//					findMax(worker_1.hny_arr);
//				}
//				
//
//			}
//		}
//		
//
//	}
//	return 0;
//}