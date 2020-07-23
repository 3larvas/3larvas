////√‚√≥ : https://www.acmicpc.net/problem/2583
//#pragma warning (disable : 4996)
//#include <stdio.h>
//#include <vector>
//#include <algorithm>
//#include <queue>
//using namespace std;
//int N,M,K, cnt;
//int map[101][101];
//int vis[101][101];
//int dir_x[4] = { 0, 0, 1, -1 };
//int dir_y[4] = { 1, -1, 0, 0 };
//vector<int> result_v;
//queue<pair<int, int>> q;
//
//void DFS(int x, int y) {
//	vis[y][x] = true;
//	cnt++;
//	for (int i = 0; i < 4; i++) {
//		int nxt_x = x + dir_x[i];
//		int nxt_y = y + dir_y[i];
//		if (nxt_x >= 0 && nxt_y >= 0 && nxt_x < N && nxt_y < M) {
//			if (map[nxt_y][nxt_x] == 0 && !vis[nxt_y][nxt_x]) {
//				DFS(nxt_x, nxt_y);
//			}
//		}
//	}
//}
//
//void BFS() {
//	for (int y = 0; y < M; y++) {
//		for (int x = 0; x < N; x++) {
//			if (map[y][x] == 0 && !vis[y][x]) {
//				q.push(make_pair(x, y));
//				cnt = 1;
//				vis[y][x] = 1;
//				while (!q.empty()) {
//					int cur_x = q.front().first;
//					int cur_y = q.front().second;
//					q.pop();
//					for (int i = 0; i < 4; i++) {
//						int nxt_x = cur_x + dir_x[i];
//						int nxt_y = cur_y + dir_y[i];
//						if (0 <= nxt_x && 0 <= nxt_y && nxt_x < N && nxt_y < M) {
//							if (map[nxt_y][nxt_x] == 0 && !vis[nxt_y][nxt_x]) {
//								q.push(make_pair(nxt_x, nxt_y));
//								cnt++;
//								vis[nxt_y][nxt_x] = 1;
//							}
//						}
//					}
//				}
//				result_v.push_back(cnt);
//			}
//		}
//	}
//}
//
//int main() {
//	scanf("%d %d %d", &M, &N, &K);
//	for (int i = 0; i < K; i++) {
//		int x1 = 0, x2 = 0, y1 = 0, y2 = 0;
//		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
//		for (int x = x1; x < x2; x++) {
//			for (int y = y1; y < y2; y++) {
//				map[y][x] = 1;
//			}
//		}
//	}
//	/*for (int y = 0; y < M; y++) {
//		for (int x = 0; x < N; x++) {
//			if (map[y][x] == 0 && !vis[y][x]) {
//				cnt = 0;
//				DFS(x, y);
//				result_v.push_back(cnt);
//			}
//		}
//	}*/
//	BFS();
//	sort(result_v.begin(), result_v.end());
//	printf("%d\n", result_v.size());
//	for (int i = 0; i < result_v.size(); i++) printf("%d ",result_v.at(i));
//	return 0;
//}