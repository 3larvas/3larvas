//// √‚√≥ : https://www.acmicpc.net/problem/7562
//#include <iostream>
//#include <queue>
//#include <vector>
//
//using namespace std;
//int t;
//vector<int> result;
//int d_row[8] = { -2, -1, 1, 2, 2, 1, -1, -2 };
//int d_col[8] = { 1, 2, 2, 1, -1, -2, -2, -1 };
//
//void BFS(int size, pair<int, int> start_addr, pair<int, int> dest_addr) {
//	int visit[301][301] = { 0 };
//	queue<pair<int, int>> q;
//	visit[start_addr.second][start_addr.first] = 1;
//	q.push(start_addr);
//	while (!q.empty()) {
//		int cur_col = q.front().first;
//		int cur_row = q.front().second;
//		q.pop();
//		if (cur_col == dest_addr.first && cur_row == dest_addr.second) {
//			result.push_back(visit[cur_row][cur_col]-1);
//			break;
//		}
//		for (int i = 0; i < 8; i++) {
//			int nxt_col = cur_col + d_col[i];
//			int nxt_row = cur_row + d_row[i];
//			if (nxt_col >= 0 && nxt_col < size && nxt_row >= 0 && nxt_row < size) {
//				if (visit[nxt_row][nxt_col] == 0) {
//					q.push(make_pair(nxt_col, nxt_row));
//					visit[nxt_row][nxt_col] = visit[cur_row][cur_col] + 1;
//				}
//			}
//		}
//	}
//}
//
//int main_7562() {
//	cin >> t;
//	for (int i = 0; i < t; i++) {
//		int size, a, b;
//		pair<int, int> start_addr, dest_addr;
//		cin >> size;
//		cin >> a >> b;
//		start_addr = make_pair(a, b);
//		cin >> a >> b;
//		dest_addr = make_pair(a, b);
//		BFS(size, start_addr, dest_addr);
//	}
//	for (int i = 0; i < result.size(); i++) {
//		cout << result.at(i)<<endl;
//	}
//	return 0;
//}
