//// √‚√≥ : https://www.acmicpc.net/problem/12100
//#include <iostream>
//#include <queue>
//using namespace std;
//struct map_info {
//	int map[21][21] = { 0, };
//	int cnt = 0;
//	int max = 0;
//};
//int n;
//int result = 0;
//map_info start_map;
//
//void BFS(){
//	queue<map_info> q;
//	q.push(start_map);
//	while (!q.empty() && q.front().cnt < 5) {
//		map_info cur_map = q.front();
//		for (int i = 0; i < 4; i++) {
//			int tmp_1_map[21][21] = { 0, };
//			map_info nxt_map;
//			switch (i) {
//				case 0:
//					for (int j = 0; j < n; j++) {						
//						for (int k = n - 1; k >= 0; k--) {
//							if (cur_map.map[k][j] != 0) {
//								int find_idx = k - 1;
//								while ((cur_map.map[find_idx][j] == 0) && (find_idx > 0)) find_idx--;
//								if (cur_map.map[k][j] == cur_map.map[find_idx][j]) {
//									k = find_idx;
//									tmp_1_map[k][j] = cur_map.map[k][j] * 2;
//								}
//								else tmp_1_map[k][j] = cur_map.map[k][j];
//							}
//						}
//						for (int k = n-1; k >=0 ; k--) {
//							if (tmp_1_map[k][j] != 0) {
//								int mov_idx = k + 1;
//								while ((nxt_map.map[mov_idx][j] == 0) && (mov_idx < n)) mov_idx++;
//								mov_idx--;
//								nxt_map.map[mov_idx][j] = tmp_1_map[k][j];
//								if (nxt_map.max < tmp_1_map[k][j]) nxt_map.max = tmp_1_map[k][j];
//							}
//						}
//					}
//					break;
//				case 1:
//					for (int j = 0; j < n; j++) {
//						for (int k = 0; k < n; k++) {
//							if (cur_map.map[k][j] != 0) {
//								int find_idx = k + 1;
//								while ((cur_map.map[find_idx][j] == 0) && (find_idx < n)) find_idx++;
//								if (cur_map.map[k][j] == cur_map.map[find_idx][j]) {
//									k = find_idx;
//									tmp_1_map[k][j] = cur_map.map[k][j] * 2;
//								}
//								else tmp_1_map[k][j] = cur_map.map[k][j];
//							}
//						}
//						for (int k = 0; k < n; k++) {
//							if (tmp_1_map[k][j] != 0) {
//								int mov_idx = k + 1;
//								while ((nxt_map.map[mov_idx][j] == 0) && (mov_idx >= 0)) mov_idx--;
//								mov_idx++;
//								nxt_map.map[mov_idx][j] = tmp_1_map[k][j];
//								if (nxt_map.max < tmp_1_map[k][j]) nxt_map.max = tmp_1_map[k][j];
//							}
//						}
//					}
//					break;
//				case 2:
//					for (int j = 0; j < n; j++) {
//						for (int k = n - 1; k >= 0; k--) {
//							if (cur_map.map[j][k] != 0) {
//								int find_idx = k - 1;
//								while ((cur_map.map[j][find_idx] == 0) && (find_idx > 0)) find_idx--;
//								if (cur_map.map[j][k] == cur_map.map[j][find_idx]) {
//									k = find_idx;
//									tmp_1_map[j][k] = cur_map.map[j][k] * 2;
//								}
//								else tmp_1_map[j][k] = cur_map.map[j][k];
//							}
//						}
//						for (int k = n - 1; k >= 0; k--) {
//							if (tmp_1_map[j][k] != 0) {
//								int mov_idx = k + 1;
//								while ((nxt_map.map[j][mov_idx] == 0) && (mov_idx < n)) mov_idx++;
//								mov_idx--;
//								nxt_map.map[j][mov_idx] = tmp_1_map[j][k];
//								if (nxt_map.max < tmp_1_map[j][k]) nxt_map.max = tmp_1_map[j][k];
//							}
//						}
//					}
//					break;
//				case 3:
//					for (int j = 0; j < n; j++) {
//						for (int k = 0; k < n; k++) {
//							if (cur_map.map[j][k] != 0) {
//								int find_idx = k + 1;
//								while ((cur_map.map[j][find_idx] == 0) && (find_idx < n)) find_idx++;
//								if (cur_map.map[j][k] == cur_map.map[j][find_idx]) {
//									k = find_idx;
//									tmp_1_map[j][k] = cur_map.map[j][k] * 2;
//								}
//								else tmp_1_map[j][k] = cur_map.map[j][k];
//							}
//						}
//						for (int k = 0; k < n; k++) {
//							if (tmp_1_map[j][k] != 0) {
//								int mov_idx = k + 1;
//								while ((nxt_map.map[j][mov_idx] == 0) && (mov_idx >= 0 )) mov_idx--;
//								mov_idx++;
//								nxt_map.map[j][mov_idx] = tmp_1_map[j][k];
//								if (nxt_map.max < tmp_1_map[j][k]) nxt_map.max = tmp_1_map[j][k];
//							}
//						}
//					}
//					break;
//			}
//
//			nxt_map.cnt = cur_map.cnt + 1;
//			if (result < nxt_map.max) result = nxt_map.max;
//			q.push(nxt_map);
//		}
//		q.pop();
//	}
//}
//
//void DFS(map_info cur_map) {
//	if (cur_map.cnt >= 5) return;
//	for (int i = 0; i < 4; i++) {
//		int tmp_1_map[21][21] = { 0, };
//		map_info nxt_map;
//		switch (i) {
//		case 0:
//			for (int j = 0; j < n; j++) {
//				for (int k = n - 1; k >= 0; k--) {
//					if (cur_map.map[k][j] != 0) {
//						int find_idx = k - 1;
//						while ((cur_map.map[find_idx][j] == 0) && (find_idx > 0)) find_idx--;
//						if (cur_map.map[k][j] == cur_map.map[find_idx][j]) {
//							k = find_idx;
//							tmp_1_map[k][j] = cur_map.map[k][j] * 2;
//						}
//						else tmp_1_map[k][j] = cur_map.map[k][j];
//					}
//				}
//				for (int k = n - 1; k >= 0; k--) {
//					if (tmp_1_map[k][j] != 0) {
//						int mov_idx = k + 1;
//						while ((nxt_map.map[mov_idx][j] == 0) && (mov_idx < n)) mov_idx++;
//						mov_idx--;
//						nxt_map.map[mov_idx][j] = tmp_1_map[k][j];
//						if (nxt_map.max < tmp_1_map[k][j]) nxt_map.max = tmp_1_map[k][j];
//					}
//				}
//			}
//			break;
//		case 1:
//			for (int j = 0; j < n; j++) {
//				for (int k = 0; k < n; k++) {
//					if (cur_map.map[k][j] != 0) {
//						int find_idx = k + 1;
//						while ((cur_map.map[find_idx][j] == 0) && (find_idx < n)) find_idx++;
//						if (cur_map.map[k][j] == cur_map.map[find_idx][j]) {
//							k = find_idx;
//							tmp_1_map[k][j] = cur_map.map[k][j] * 2;
//						}
//						else tmp_1_map[k][j] = cur_map.map[k][j];
//					}
//				}
//				for (int k = 0; k < n; k++) {
//					if (tmp_1_map[k][j] != 0) {
//						int mov_idx = k + 1;
//						while ((nxt_map.map[mov_idx][j] == 0) && (mov_idx >= 0)) mov_idx--;
//						mov_idx++;
//						nxt_map.map[mov_idx][j] = tmp_1_map[k][j];
//						if (nxt_map.max < tmp_1_map[k][j]) nxt_map.max = tmp_1_map[k][j];
//					}
//				}
//			}
//			break;
//		case 2:
//			for (int j = 0; j < n; j++) {
//				for (int k = n - 1; k >= 0; k--) {
//					if (cur_map.map[j][k] != 0) {
//						int find_idx = k - 1;
//						while ((cur_map.map[j][find_idx] == 0) && (find_idx > 0)) find_idx--;
//						if (cur_map.map[j][k] == cur_map.map[j][find_idx]) {
//							k = find_idx;
//							tmp_1_map[j][k] = cur_map.map[j][k] * 2;
//						}
//						else tmp_1_map[j][k] = cur_map.map[j][k];
//					}
//				}
//				for (int k = n - 1; k >= 0; k--) {
//					if (tmp_1_map[j][k] != 0) {
//						int mov_idx = k + 1;
//						while ((nxt_map.map[j][mov_idx] == 0) && (mov_idx < n)) mov_idx++;
//						mov_idx--;
//						nxt_map.map[j][mov_idx] = tmp_1_map[j][k];
//						if (nxt_map.max < tmp_1_map[j][k]) nxt_map.max = tmp_1_map[j][k];
//					}
//				}
//			}
//			break;
//		case 3:
//			for (int j = 0; j < n; j++) {
//				for (int k = 0; k < n; k++) {
//					if (cur_map.map[j][k] != 0) {
//						int find_idx = k + 1;
//						while ((cur_map.map[j][find_idx] == 0) && (find_idx < n)) find_idx++;
//						if (cur_map.map[j][k] == cur_map.map[j][find_idx]) {
//							k = find_idx;
//							tmp_1_map[j][k] = cur_map.map[j][k] * 2;
//						}
//						else tmp_1_map[j][k] = cur_map.map[j][k];
//					}
//				}
//				for (int k = 0; k < n; k++) {
//					if (tmp_1_map[j][k] != 0) {
//						int mov_idx = k + 1;
//						while ((nxt_map.map[j][mov_idx] == 0) && (mov_idx >= 0)) mov_idx--;
//						mov_idx++;
//						nxt_map.map[j][mov_idx] = tmp_1_map[j][k];
//						if (nxt_map.max < tmp_1_map[j][k]) nxt_map.max = tmp_1_map[j][k];
//					}
//				}
//			}
//			break;
//		}
//		nxt_map.cnt = cur_map.cnt + 1;
//		if (result < nxt_map.max) result = nxt_map.max;
//		DFS(nxt_map);
//	}
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			cin >> start_map.map[i][j];
//		}
//	}
//	start_map.cnt = 0;
//	//BFS();
//	//cout << result;
//	DFS(start_map);
//	cout << result;
//	return 0;
//}