//// √‚√≥ : https://www.acmicpc.net/problem/2573
//#include <iostream>
//#include <queue>
//using namespace std;
//
//int n, m;
//int map[301][301] = { 0 };;
//int map_tmp[301][301] = { 0 };;
//
//int d_col[] = { -1, 1, 0, 0 };
//int d_row[] = { 0, 0, -1, 1 };
//int result = 0;
//bool check = false;
//
//bool BFS_cnt(pair<int, int> start_addr, int total) {
//	int cnt = 0;
//	int map_vis[301][301] = { 0 };
//	queue<pair<int, int>> q;
//	q.push(make_pair(start_addr.first, start_addr.second));
//
//	while (!q.empty()) {
//		cnt += 1;
//		int cur_col = q.front().first;
//		int cur_row = q.front().second;
//		map_vis[cur_row][cur_col] = 1;
//		q.pop();
//		for (int i = 0; i < 4; i++) {
//			int nxt_col = cur_col + d_col[i];
//			int nxt_row = cur_row + d_row[i];
//			if (map[nxt_row][nxt_col] != 0 && map_vis[nxt_row][nxt_col]!=1) {
//				map_vis[nxt_row][nxt_col] = 1;
//				q.push(make_pair(nxt_col, nxt_row));
//			}
//		}
//	}
//	if (cnt != total) {
//		return true;
//		check = true;
//	}
//	return false;
//}
//
//void BFS_melt(queue<pair<int, int>> q) {
//	while (!q.empty()) {
//		int cur_col = q.front().first;
//		int cur_row = q.front().second;
//		q.pop();
//		if (cur_col == -1 && cur_row == -1) {
//			result += 1;
//			copy(&map_tmp[0][0], &map_tmp[0][0] + 301 * 301, &map[0][0]);
//			for (int i = 0; i < n; i++) {
//				for (int j = 0; j < m; j++) {
//					if (map[i][j] != 0) {
//						q.push(make_pair(j, i));
//					}
//				}
//			}
//			if (q.empty()) {
//				check = true;
//				break;
//			}
//			if (BFS_cnt(q.front(), q.size())) {
//				break;
//			}
//			q.push(make_pair(-1, -1));
//			cur_col = q.front().first;
//			cur_row = q.front().second;
//			q.pop();
//		}
//		for (int i = 0; i < 4; i++) {
//			int nxt_col = cur_col + d_col[i];
//			int nxt_row = cur_row + d_row[i];
//			if (map[nxt_row][nxt_col] == 0) {
//				if (map_tmp[cur_row][cur_col] > 0) {
//					map_tmp[cur_row][cur_col] -= 1;
//				}
//			}
//		}
//	}
//}
//
//int main() {
//	queue<pair<int, int>> q;
//	cin >> n >> m;
//	int input;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cin >> input;
//			map[i][j]= input;
//			map_tmp[i][j] = input;
//			if (input != 0) {
//				q.push(make_pair(j, i));
//			}
//		}
//	}
//	if (BFS_cnt(q.front(), q.size())) {
//		cout << 0;
//		return 0;
//	}
//	q.push(make_pair(-1, -1));
//	BFS_melt(q);
//	if (!check) {
//		cout << result;
//	}
//	else {
//		cout << 0;
//	}
//	return 0;
//}