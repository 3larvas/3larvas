//// √‚√≥ :	https://www.acmicpc.net/problem/11559
//#include <iostream>
//#include <queue>
//
//using namespace std;
//
//char map[12][6] = { "" };
//bool map_vis[12][6] = { "" };
//char map_tmp[12][6] = { "" };
//int map_rmv_cnt[12*6] = { 0 };
//pair<int, int> map_rmv[12 * 6][12 * 6];
//int rmv_cnt = 0;
//int result = 0;
//int result_cnt = 0;
//int d_col[4] = { 1, -1, 0, 0 };
//int d_row[4] = { 0, 0, 1, -1 };
//queue<pair<int, int>> rmv_q;
//
//void dfs(int cur_col, int cur_row) {
//	map_vis[cur_row][cur_col] = true;
//	map_rmv_cnt[rmv_cnt]++;
//	map_rmv[rmv_cnt][map_rmv_cnt[rmv_cnt]-1] = make_pair(cur_col, cur_row);
//	for (int i = 0; i < 4; i++) {
//		int nxt_col = cur_col + d_col[i];
//		int nxt_row = cur_row + d_row[i];
//		if (nxt_col >= 0 && nxt_col < 6 && nxt_row >= 0 && nxt_row < 12) {
//			if (map[nxt_row][nxt_col] != '.' && map_vis[nxt_row][nxt_col] == false) {
//				if (map[nxt_row][nxt_col] == map[cur_row][cur_col]) {	
//					dfs(nxt_col, nxt_row);
//				}
//			}
//		}
//	}
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	char input;
//	for (int i = 0; i < 12; i++) {
//		for (int j = 0; j < 6; j++) {
//			cin >> input;
//			map[i][j]=input;
//		}
//	}
//	while (1) {
//		for (int i = 0; i < 12; i++) {
//			for (int j = 0; j < 6; j++) {
//				map_tmp[i][j] = map[i][j];
//				if (map[i][j] != '.' && map_vis[i][j] == false) {
//					dfs(j, i);
//					rmv_cnt++;
//				}
//			}
//		}
//		int end = 0;
//		for (int i = 0; i < 12 * 6; i++) {
//			if (map_rmv_cnt[i] == 0) {
//				end = i;
//				break;
//			}				
//			else if (map_rmv_cnt[i] >= 4) {
//				result_cnt++;
//				for (int j = 0; j < map_rmv_cnt[i]; j++) {
//					//map[map_rmv[i][j].second][map_rmv[i][j].first] = 'x';
//					for (int k = map_rmv[i][j].second; k > 0; k--) {
//						map[k][map_rmv[i][j].first] = map[k - 1][map_rmv[i][j].first];
//					}
//				}
//			}
//		}
//		
//		for (int j = 0; j < 6; j++) {
//			for (int i = 11; i >= 0; i--) {
//				if (map[i][j] == 'x') {
//					map[i][j] = map[i - 1][j];
//				}
//			}
//		}
//		if (result_cnt == 0) break;
//		result_cnt = 0;
//		rmv_cnt = 0;
//		for (int i = 0; i < end; i++) {
//			map_rmv_cnt[i] = 0;
//			for (int j = 0; j < 12 * 6; j++) {
//				map_rmv[i][j] = make_pair(0, 0);
//			}
//		}
//		//fill(&map_rmv_cnt[0], &map_rmv_cnt[0] + sizeof(map_rmv_cnt), 0);
//		fill(&map_vis[0][0], &map_vis[0][0] + sizeof(map_vis), 0);
//		result++;
//	}
//	cout << result;
//	return 0;
//}