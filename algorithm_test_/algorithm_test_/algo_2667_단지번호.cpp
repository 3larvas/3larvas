//// √‚√≥ : https://www.acmicpc.net/problem/2667
//#include <iostream>
//#include <queue>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//bool map[25][25];
//bool vis_map[25][25];
//int n;
//int cnt;
//vector<int> result;
//int d_col[4] = { 0,0,1,-1 };
//int d_row[4] = { 1,-1,0,0 };
//
//void BFS(int row, int col) {
//	int tmp_cnt = 0;
//	queue<pair<int, int>> q;
//	q.push(make_pair(col, row));
//	while (!q.empty()) {
//		int cur_col = q.front().first;
//		int cur_row = q.front().second;
//		if (map[cur_row][cur_col] == 1 && vis_map[cur_row][cur_col] == 0) {
//			vis_map[cur_row][cur_col] = 1;
//			tmp_cnt++;
//		}
//		for (int i = 0; i < 4; i++) {
//			int nxt_col = cur_col + d_col[i];
//			int nxt_row = cur_row + d_row[i];
//			if (nxt_col >= 0 && nxt_col < n && nxt_row >= 0 && nxt_row < n) {
//				if (map[nxt_row][nxt_col] == 1 && vis_map[nxt_row][nxt_col] == 0) {
//					q.push(make_pair(nxt_col, nxt_row));
//					vis_map[nxt_row][nxt_col] = 1;
//					tmp_cnt++;
//				}
//			}
//		}
//		q.pop();
//	}
//	if(tmp_cnt!=0)result.push_back(tmp_cnt);
//}
//
//void DFS(int row, int col, int idx) {
//	vis_map[row][col] = 1;
//	for (int i = 0; i < 4; i++) {
//		int nxt_col = col + d_col[i];
//		int nxt_row = row + d_row[i];
//		if (nxt_col >= 0 && nxt_col < n && nxt_row >= 0 && nxt_row < n) {
//			if (map[nxt_row][nxt_col] == 1 && vis_map[nxt_row][nxt_col] == 0) {
//				DFS(nxt_row, nxt_col, idx);
//				cnt++;
//			}
//		}
//
//	}
//}
//
//int main() {
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		string input;
//		cin >> input;
//		for (int j = 0; j < input.size(); j++){
//			if (input[j] == '1') map[i][j] = 1;
//			else map[i][j] = 0;
//		}
//	}
//	int idx = 0;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			if (vis_map[i][j] == 0 && map[i][j]==1) {
//				idx++;
//				DFS(i, j, idx);
//				cnt++;
//				result.push_back(cnt);
//				cnt = 0;
//				//BFS(i, j);
//			}
//		}
//	}
//	sort(result.begin(), result.end());
//	cout << result.size() << "\n";
//	for (int i = 0; i < result.size(); i++) cout << result.at(i) << "\n";
//	return 0;
//}