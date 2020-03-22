//// √‚√≥ : https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5V1SYKAaUDFAWu&
//#pragma warning (disable : 4996)
//#include <cstdio>
//#include <algorithm>
//using namespace std;
//
//int t;
//
//bool check(int arr[13][20], int d, int w, int kk) {
//	int cnt_c = 0;
//	for (int j = 0; j < w; j++) {
//		int cnt_r = 0;
//		for (int k = 1; k < d; k++) {
//			if (arr[k][j] == arr[k - 1][j]) cnt_r++;
//			else cnt_r = 0;
//			if (cnt_r == kk - 1) {
//				printf("%d ok\n", j);
//				cnt_c++;
//				break;
//			}
//		}
//		if (cnt_r != kk - 1) {
//			cnt_c = 0;
//			return false;
//		}
//	}
//	return true;
//}
//void add(int arr[13][20], int d, int w, int kk) {
//	
//	
//}
//
//int main() {
//	scanf("%d", &t);
//	for (int tt = 0; tt < t; tt++) {
//		int d = 0, w = 0, kk = 0;
//		int map[13][20] = { 0, };
//		scanf("%d %d %d", &d, &w, &kk);
//		for (int i = 0; i < d; i++) {
//			for (int j = 0; j < w; j++) {
//				scanf("%d", &map[i][j]);
//			}
//		}
//		bool chk = false;
//		while (!check(map, d, w, kk) || !chk) {
//			int tmp_map[13][20] = { 0, };
//			copy(&map[0][0], &map[0][0] + 13 * 20, &tmp_map[0][0]);
//			for (int i = 0; i < d; i++) {
//				for(int j = 0 ; j < w ; j++) tmp_map[i][j] = 0;
//				if (check(tmp_map, d, w, kk)) {
//					chk = true;
//					break;
//				}
//				for (int j = 0; j < w; j++) tmp_map[i][j] = 1;
//				if (check(tmp_map, d, w, kk)) {
//					chk = true;
//					break;
//				}
//			}
//			
//			
//		}
//		printf("ok\n");
//	}
//	return 0;
//}