////ÃâÃ³ : https://www.acmicpc.net/problem/14722
//#pragma warning(disable : 4996)
//#include <stdio.h>
//#include <utility>
//using namespace std;
//int state, N;
//int map[1001][1001];
//pair<int, int> dp[1001][1001];
//int dir_r[2] = { 0, 1 };
//int dir_c[2] = { 1, 0 };
//
//bool check_milk(int cur_state, int nxt_state) {
//	switch (cur_state) {
//		case 0:
//			if (nxt_state == 1) return true;
//			else return false;
//			break;
//		case 1:
//			if (nxt_state == 2) return true;
//			else return false;
//			break;
//		case 2:
//			if (nxt_state == 3) return true;
//			else return false;
//			break;
//		case 3:
//			if (nxt_state == 0) return true;
//			else return false;
//			break;
//	}
//}
//
//int main() {
//	scanf("%d", &N);
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			scanf("%d", &map[i][j]);
//		}
//	}
//	int cur_r = 0, cur_c = 0;
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			int cur_val = map[i][j];
//			for (int k = 0; k < 2; k++) {
//				int nxt_r = i + dir_r[k];
//				int nxt_c = j + dir_c[k];
//				int nxt_val = map[nxt_r][nxt_c];
//				if (state == 0 && nxt_val==1) {
//					
//				}
//				if (check_milk(cur_val, nxt_val)) {
//					dp[nxt_r][nxt_c] = make_pair(state, dp[i][j].second + 1);
//				}
//				else
//					dp[nxt_r][nxt_c] = dp[i][j];
//			}
//
//		}
//	
//		
//
//	}
//	return 0;
//}