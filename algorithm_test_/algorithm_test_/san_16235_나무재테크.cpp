////https://www.acmicpc.net/problem/16235
//#pragma warning (disable : 4996)
//#include <stdio.h>
//#include <queue>
//using namespace std;
//struct tree_info {
//	deque <int> tree_list;
//	int eng=0;
//	int die_eng=0;
//	int new_cnt=0;
//};
//tree_info tree_map[11][11][1001];
//int N, M, K;
//int add_map[11][11];
//int dir_r[8] = { -1, -1, 0, 1, 1, 1, 0, -1 };
//int dir_c[8] = { 0, 1, 1, 1, 0, -1, -1, -1 };
//int result;
//
//int main() {
//	scanf("%d %d %d", &N, &M, &K);
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= N; j++) {
//			scanf("%d", &add_map[i][j]);
//			tree_map[i][j][0].eng = 5;
//		}
//	}
//	for (int i = 0; i < M; i++) {
//		int x = 0, y = 0, year = 0;
//		scanf("%d %d %d", &x, &y, &year);
//		tree_map[x][y][0].tree_list.push_back(year);
//	}
//	for (int y = 1; y <= K; y++) {
//		for (int i = 1; i <= N; i++) {
//			for (int j = 1; j <= N; j++) {
//				tree_info pre_map = tree_map[i][j][y-1];
//				if (pre_map.tree_list.size() != 0) {
//					while (!pre_map.tree_list.empty()) {
//						if (pre_map.eng - pre_map.tree_list.front() >= 0) {
//							pre_map.eng -= pre_map.tree_list.front();
//							tree_map[i][j][y].tree_list.push_back(pre_map.tree_list.front() + 1);
//							if ((pre_map.tree_list.front() + 1) % 5 == 0)
//								pre_map.new_cnt += 1;
//							pre_map.tree_list.pop_front();
//						}
//						else {
//							pre_map.die_eng += pre_map.tree_list.front()/2;
//							pre_map.tree_list.pop_front();
//						}
//					}
//				}
//				// summer step
//				tree_map[i][j][y].eng = pre_map.eng + pre_map.die_eng;
//				tree_map[i][j][y].new_cnt = pre_map.new_cnt;
//			}
//		}
//		for (int i = 1; i <= N; i++) {
//			for (int j = 1; j <= N; j++) {
//				tree_info cur_map = tree_map[i][j][y];
//				for (int k = 0; k < cur_map.new_cnt; k++) {
//					for (int l = 0; l < 8; l++) {
//						int nxt_r = i + dir_r[l];
//						int nxt_c = j + dir_c[l];
//						if (nxt_r > 0 && nxt_r <= N && nxt_c > 0 && nxt_c <= N) {
//							tree_map[nxt_r][nxt_c][y].tree_list.push_front(1);
//						}
//					}
//				}
//				tree_map[i][j][y].new_cnt = 0;
//				tree_map[i][j][y].eng += add_map[i][j];
//			}
//		}
//	}
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= N; j++) {
//			tree_info cur_map = tree_map[i][j][K];
//			if (cur_map.tree_list.size() != 0) {
//				result += cur_map.tree_list.size();
//			}
//		}
//	}
//
//	printf("%d", result);
//	return 0;
//}