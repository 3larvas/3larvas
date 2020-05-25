////https://www.acmicpc.net/problem/17142
//#pragma warning(disable : 4996)
//#include<stdio.h>
//#include<queue>
//using namespace std;
//
//int N, M;
//char map[51][51];
//
//pair<int, int> vir_list[11];
//bool vir_vis[11];
//int vir_cnt;
//deque<pair<int, int>> q;
//int dir_x[4] = { 1,-1,0,0 };
//int dir_y[4] = { 0,0,1,-1 };
//int result=999999;
//
//
//void BFS(deque<pair<int, int>> q) {
//	bool map_vis[51][51] = { false, };
//	char map_tmp[51][51] = { ' ', };
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			map_tmp[i][j] = map[i][j];
//		}
//	}
//	/*for (int i = 0; i < q.size(); i++) {
//		map_tmp[q.at(i).first][q.at(i).second] = '0';
//		map_vis[q.at(i).first][q.at(i).second] = true;
//	}*/
//	q.push_back(make_pair(-1, -1));
//	int cnt_max = 1;
//	bool chk = false;
//	int result_tmp = 0;
//	while (!q.empty()) {
//		if (q.front().first == -1) {
//			
//			cnt_max++;
//			q.pop_front();
//			q.push_back(make_pair(-1, -1));
//			if (q.size() == 1) {
//				for (int i = 0; i < N; i++) {
//					for (int j = 0; j < N; j++) {
//						if (map_tmp[i][j] == 'a') {
//							chk = true;
//							break;
//						}
//						if (chk) break;
//						if (map_tmp[i][j] != '@' && map_tmp[i][j] != '-')
//							if (result_tmp < map_tmp[i][j] - '0')
//								result_tmp = map_tmp[i][j] - '0';
//					}
//				}
//				if (chk) break;
//				break;
//			}
//			continue;
//		}
//		
//		int cur_y = q.front().first;
//		int cur_x = q.front().second;
//
//		q.pop_front();
//		for (int i = 0; i < 4; i++) {
//			int nxt_x = cur_x + dir_x[i];
//			int nxt_y = cur_y + dir_y[i];
//			if (nxt_x >= 0 && nxt_y >= 0 && nxt_x < N && nxt_y < N && map_tmp[nxt_y][nxt_x]!='-' && !map_vis[nxt_y][nxt_x]) {
//				if (map_tmp[nxt_y][nxt_x] == 'a') {
//					map_tmp[nxt_y][nxt_x] = cnt_max + '0';
//					map_vis[nxt_y][nxt_x] = true;
//					q.push_back(make_pair(nxt_y, nxt_x));
//				}
//				else if (map_tmp[nxt_y][nxt_x] == '*') {
//					map_tmp[nxt_y][nxt_x] = '@';
//					map_vis[nxt_y][nxt_x] = true;
//					q.push_front(make_pair(nxt_y, nxt_x));
//				}
//			}
//		}
//	}
//	if(!chk)
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j < N; j++) {
//				printf("%c", map_tmp[i][j]);
//			}
//			printf("\n");
//		}
//	if(!chk)
//		if (result > result_tmp) result = result_tmp;
//}
//
//void DFS(int cnt, int idx) {
//	if (cnt == M) {
//		for (int i = 0; i < q.size(); i++) printf("<%d, %d>, ", q.at(i).first, q.at(i).second);
//		printf("\n");
//		BFS(q);
//		return;
//	}
//	for (int i = idx; i < vir_cnt; i++) {
//		if (!vir_vis[i]) {
//			q.push_back(vir_list[i]);
//			vir_vis[i] = true;
//			DFS(cnt+1, i+1);
//			q.pop_back();
//			vir_vis[i] = false;
//		}
//	}
//}
//int main() {
//	scanf("%d %d", &N, &M);
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			int input;
//			scanf("%d", &input);
//			if (input == 2) {
//				map[i][j] = '*';
//				vir_list[vir_cnt] = make_pair(i, j);
//				vir_cnt++;
//			}
//			else if (input == 0) {
//				map[i][j] = 'a';
//			}
//			else if (input == 1) {
//				map[i][j] = '-';
//			}
//		}
//	}
//	DFS(0, 0);
//	if (result == 999999) printf("-1");
//	else  printf("%d", result );
//	
//	return 0;
//}