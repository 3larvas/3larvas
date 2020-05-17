//// https://www.acmicpc.net/problem/12100
//#pragma warning (disable : 4996)
//#include <stdio.h>
//#include <queue>
//using namespace std;
//
//struct map_info {
//	int map[21][21] = {};
//	int cnt = 0;
//	int max = 0;
//};
//
//int n;
//int result;
//int dir_x[4] = { 0,0,1,-1 };
//int dir_y[4] = { 1,-1,0,0 };
//
//void DFS(map_info map){
//	if (map.cnt == 5) {
//		if (map.max > result)
//			result = map.max;
//		return;
//	}
//	for (int i = 0; i < 4; i++) {
//		switch(i) {
//			case 1:
//				for (int j = 0; j < n; j++) {
//					int tmp_cnt = 0;
//					for (int k = n - 1; k > 0; k -= 2) {
//						if (map.map[k][j] == map.map[k - 1][j]) {
//							tmp_cnt++;
//							map.map[k][j] += map.map[k][j];
//						}
//					}
//				}
//				
//				break;
//		}
//		
//
//	}
//}
//
//int main() {
//	map_info start;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			scanf("%d", start.map[i][j]);
//		}
//	}
//	DFS(start);
//	return 0;
//}