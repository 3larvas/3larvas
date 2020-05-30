//// https://www.acmicpc.net/problem/17837
//#pragma warning(disable : 4996)
//#include <stdio.h>
//#include <queue>
//using namespace std;
//
//struct player_info {
//	int r, c, f, d;
//};
//struct map_info {
//	int type;
//	deque<int> player_list;
//};
//player_info player_list[11];
//map_info map[13][13];
//int N, K;
//int dir_r[5] = { 0, 0, 0, -1, 1 };
//int dir_c[5] = { 0, 1, -1, 0, 0 };
//
//int change_dir(int dir) {
//	if (dir == 1) return 2;
//	else if (dir == 2) return 1;
//	else if (dir == 3) return 4;
//	else if (dir == 4) return 3;
//}
//
//int main() {
//	scanf("%d %d", &N, &K);
//	for (int i = 1; i <= N; i++) 
//		for (int j = 1; j <= N; j++) 
//			scanf("%d", &map[i][j].type);
//	
//	for (int i = 1; i <= K; i++) {
//		int r = 0, c = 0, d = 0;
//		scanf("%d %d %d", &r, &c, &d);
//		player_list[i].r = r;
//		player_list[i].c = c;
//		player_list[i].d = d;
//		map[r][c].player_list.push_back(i);
//	}
//	bool chk = false;
//	int result = -1;
//	int cnt = 0;
//	while (cnt<1000) {
//		if (chk) {
//			result = cnt;
//			break;
//		}
//		cnt++;
//		for (int idx = 1; idx <= K; idx++) {
//			player_info cur_player = player_list[idx];
//			int nxt_r = cur_player.r + dir_r[cur_player.d];
//			int nxt_c = cur_player.c + dir_c[cur_player.d];
//			if (nxt_r >= 1 && nxt_r <= N && nxt_c >= 1 && nxt_c <= N && map[nxt_r][nxt_c].type != 2) {
//				if (map[nxt_r][nxt_c].type == 0) {
//					deque<int> tmp_q= map[cur_player.r][cur_player.c].player_list;
//					for (int i = 0; i < cur_player.f; i++) tmp_q.pop_front();
//					while (!tmp_q.empty()) {
//						map[nxt_r][nxt_c].player_list.push_back(tmp_q.front());
//						player_list[tmp_q.front()].r = nxt_r;
//						player_list[tmp_q.front()].c = nxt_c;
//						player_list[tmp_q.front()].f = map[nxt_r][nxt_c].player_list.size()-1;
//						tmp_q.pop_front();
//						map[cur_player.r][cur_player.c].player_list.pop_back();////
//					}
//					if (map[nxt_r][nxt_c].player_list.size() >= 4) {
//						chk = true;
//						break;
//					}
//				}
//				else if (map[nxt_r][nxt_c].type == 1) {
//					int size_ = map[cur_player.r][cur_player.c].player_list.size();
//					for (int i = 0; i <  size_ - cur_player.f; i++) {
//						map[nxt_r][nxt_c].player_list.push_back(map[cur_player.r][cur_player.c].player_list.back());
//						player_list[map[cur_player.r][cur_player.c].player_list.back()].r = nxt_r;
//						player_list[map[cur_player.r][cur_player.c].player_list.back()].c = nxt_c;
//						player_list[map[cur_player.r][cur_player.c].player_list.back()].f = map[nxt_r][nxt_c].player_list.size() - 1;
//						map[cur_player.r][cur_player.c].player_list.pop_back();
//					}
//					if (map[nxt_r][nxt_c].player_list.size() >= 4) {
//						chk = true;
//						break;
//					}
//				}
//			}
//			else {
//				cur_player.d = change_dir(cur_player.d);
//				player_list[idx].d = cur_player.d;
//				int new_nxt_r = cur_player.r + dir_r[cur_player.d];
//				int new_nxt_c = cur_player.c + dir_c[cur_player.d];
//				if (new_nxt_r >= 1 && new_nxt_r <= N && new_nxt_c >= 1 && new_nxt_c <= N && map[new_nxt_r][new_nxt_c].type != 2) {
//					if (map[new_nxt_r][new_nxt_c].type == 0) {
//						deque<int> tmp_q = map[cur_player.r][cur_player.c].player_list;
//						for (int i = 0; i < cur_player.f; i++) tmp_q.pop_front();
//						while (!tmp_q.empty()) {
//							map[new_nxt_r][new_nxt_c].player_list.push_back(tmp_q.front());
//							player_list[tmp_q.front()].r = new_nxt_r;
//							player_list[tmp_q.front()].c = new_nxt_c;
//							player_list[tmp_q.front()].f = map[new_nxt_r][new_nxt_c].player_list.size() - 1;
//							tmp_q.pop_front();
//							map[cur_player.r][cur_player.c].player_list.pop_back();////
//						}
//						if (map[new_nxt_r][new_nxt_c].player_list.size() >= 4) {
//							chk = true;
//							break;
//						}
//					}
//					else if (map[new_nxt_r][new_nxt_c].type == 1) {
//						int size_ = map[cur_player.r][cur_player.c].player_list.size();
//						for (int i = 0; i < size_ - cur_player.f; i++) {
//							map[new_nxt_r][new_nxt_c].player_list.push_back(map[cur_player.r][cur_player.c].player_list.back());
//							player_list[map[cur_player.r][cur_player.c].player_list.back()].r = new_nxt_r;
//							player_list[map[cur_player.r][cur_player.c].player_list.back()].c = new_nxt_c;
//							player_list[map[cur_player.r][cur_player.c].player_list.back()].f = map[new_nxt_r][new_nxt_c].player_list.size() - 1;
//							map[cur_player.r][cur_player.c].player_list.pop_back();
//						}
//						if (map[new_nxt_r][new_nxt_c].player_list.size() >= 4) {
//							chk = true;
//							break;
//						}
//					}
//				}
//				else {
//					cur_player.d = change_dir(cur_player.d);
//				}
//			}
//	}
//	printf("%d", result);
//	return 0;
//}