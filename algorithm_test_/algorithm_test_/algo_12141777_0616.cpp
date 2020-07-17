//#pragma warning(disable : 4996)
//#include <stdio.h>
//#include <vector>
//#include <queue>
//#define MAX 50000
//using namespace std;
//int T;
//int vis[2][MAX];
//queue<pair<int, int>> cost_q;
//pair<int, int> cost_arr[500];
//int result = 100000;
//int result_cnt;
//int gap_cnt_1, gap_cnt_2;
//
//int main() {
//	int size = 0;
//	scanf("%d", &T);
//	for (int t = 0; t < T; t++) {
//		int a = 0, b = 0;
//		scanf("%d %d", &a, &b);
//		cost_q.push(make_pair(a, b));
//		cost_arr[t] = make_pair(a, b);
//		if (a - b > 0) gap_cnt_1++;
//		else gap_cnt_2++;
//	}
//	if (gap_cnt_1 == T || gap_cnt_2 == T) {
//		printf("-1");
//		return 0;
//	}
//
//	while (!cost_q.empty()) {
//		int cur_a = cost_q.front().first;
//		int cur_b = cost_q.front().second;
//		cost_q.pop();
//		vis[0][cur_a] = 1;
//		vis[1][cur_b] = 1;
//		for (int i = 0; i < T; i++) {
//			int nxt_a = cur_a + cost_arr[i].first;
//			int nxt_b = cur_b + cost_arr[i].second;
//			if (!vis[0][nxt_a] && !vis[1][nxt_b] && nxt_a < MAX && nxt_b <MAX) {
//				cost_q.push(make_pair(nxt_a, nxt_b));
//				if (nxt_a == nxt_b) {
//					printf("%d %d == \n", nxt_a, nxt_b);
//					result_cnt++;
//					if (result > nxt_a) result = nxt_a;
//					if (result_cnt == 3) {
//						printf("%d\n", result);
//						return 0;
//					}
//				}
//			}
//		}
//	}
//	printf("%d\n", result);
//	return 0;
//}