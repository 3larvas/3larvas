////√‚√≥ : https://www.acmicpc.net/problem/1600
//#include <iostream>
//#include <queue>
//using namespace std;
//
//int k = 0;
//int w, h = 0;
//int map[201][201] = { 0, };
//pair<int, int> map_vis[201][201] = { make_pair(0,0), };
//bool chk = false;
//
//int d_row[12] = {1, -1, 0 , 0, -2, -1, 1, 2, 2, 1, -1, -2 };
//int d_col[12] = {0, 0, 1, -1, 1, 2, 2, 1, -1, -2, -2, -1 };
//
//void BFS() {
//	queue<pair<int, int>> q;
//	q.push(make_pair(0, 0));
//	map_vis[0][0] = make_pair(1, k);
//	while (!q.empty()) {
//		int cur_col = q.front().first;
//		int cur_row = q.front().second;
//		int k_tmp   = map_vis[cur_row][cur_col].second;
//		int nxt_col = 0;
//		int nxt_row = 0;
//		if (cur_col == w - 1 && cur_row == h - 1) {
//			cout << map_vis[cur_row][cur_col].first-1;
//			chk = true;
//			break;
//		}
//		if (k_tmp != 0) {
//			for (int i = 0; i < 12; i++) {
//				nxt_col = cur_col + d_col[i];
//				nxt_row = cur_row + d_row[i];
//				if (nxt_col >= 0 && nxt_col < w && nxt_row >= 0 && nxt_row < h) {
//					if (map[nxt_row][nxt_col] == 0) {
//						if (map_vis[nxt_row][nxt_col].first == 0 || map_vis[nxt_row][nxt_col].second < k_tmp) {
//							map_vis[nxt_row][nxt_col].first = map_vis[cur_row][cur_col].first + 1;
//							if (i > 3) map_vis[nxt_row][nxt_col].second = map_vis[cur_row][cur_col].second - 1;
//							else map_vis[nxt_row][nxt_col].second = map_vis[cur_row][cur_col].second;
//							q.push(make_pair(nxt_col, nxt_row));
//						}
//					}
//				}
//			}
//		}
//		else {
//			for (int i = 0; i < 4; i++) {
//				nxt_col = cur_col + d_col[i];
//				nxt_row = cur_row + d_row[i];
//				if (nxt_col >= 0 && nxt_col < w && nxt_row >= 0 && nxt_row < h) {
//					if (map[nxt_row][nxt_col] == 0) {
//						if (map_vis[nxt_row][nxt_col].first == 0 || map_vis[nxt_row][nxt_col].second < k_tmp) {
//							map_vis[nxt_row][nxt_col].first = map_vis[cur_row][cur_col].first + 1;
//							map_vis[nxt_row][nxt_col].second = map_vis[cur_row][cur_col].second;
//							q.push(make_pair(nxt_col, nxt_row));
//						}
//					}
//				}
//			}
//		}
//		q.pop();
//	}
//	if (!chk) cout << -1;	
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	cin >> k;
//	cin >> w >> h;
//	int input = 0;
//	for (int i = 0; i < h; i++) {
//		for (int j = 0; j < w; j++) {
//			cin >> input;
//			map[i][j] = input;
//		}
//	}
//	BFS();
//	return 0;
//}