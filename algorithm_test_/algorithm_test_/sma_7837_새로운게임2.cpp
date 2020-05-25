//// https://www.acmicpc.net/problem/17837
//#pragma warning(disable : 4996)
//#include <stdio.h>
//#include <utility>
//#include <deque>
//#include <vector>
//#define WHITE	0;
//#define RED		1;
//#define BLUE	2;
//
//struct player {
//	int num;
//	int dir;
//};
//struct player_pos {
//	int row;
//	int col;
//	int floor;
//};
//using namespace std;
//int map[13][13];
//player_pos pos_player[11];
//deque<player> map_player[13][13];
//int N, K;
//int dir_row[5] = { 0,0,0,-1,1 };
//int dir_col[5] = { 0,1,-1,0,0 };
//int turn;
//
//int change_dir(int ori) {
//	switch (ori) {
//	case 1:
//		return 2;
//	case 2:
//		return 1;
//	case 3:
//		return 4;
//	case 4:
//		return 3;
//	}
//}
//
//void moveTurn() {
//	while (true) {
//		turn++;
//		if (turn == 1001)
//			break;
//		for (int i = 1; i <= K; i++) {
//			int cur_row = pos_player[i].row;
//			int cur_col = pos_player[i].col;
//			int cur_flo = pos_player[i].floor;
//			int cur_dir = map_player[cur_row][cur_col].at(cur_flo).dir;
//			deque<player> move_player;
//			for (int j = cur_flo; j < map_player[cur_row][cur_col].size(); j++) {
//				move_player.push_back(map_player[cur_row][cur_col].at(j));
//			}
//			int nxt_row = cur_row + dir_row[cur_dir];
//			int nxt_col = cur_col + dir_col[cur_dir];
//
//			if (nxt_row > 0 && nxt_col > 0 && nxt_row <= N && nxt_col <= N) {
//				switch (map[nxt_row][nxt_col]) {
//				case 0:
//					while(!move_player.empty()){
//						map_player[nxt_row][nxt_col].push_back(move_player.front());
//						pos_player[move_player.front().num].row = nxt_row;
//						pos_player[move_player.front().num].col = nxt_col;
//						int new_floor = map_player[nxt_row][nxt_col].size() - 1;
//						if (new_floor == 3) return ;
//						pos_player[move_player.front().num].floor = new_floor;
//						move_player.pop_front();
//						map_player[cur_row][cur_col].pop_back();
//					}	
//					break;
//				case 1:
//					while (!move_player.empty()) {
//						map_player[nxt_row][nxt_col].push_back(move_player.back());
//						pos_player[move_player.back().num].row = nxt_row;
//						pos_player[move_player.back().num].col = nxt_col;
//						int new_floor = map_player[nxt_row][nxt_col].size() - 1;
//						if (new_floor == 3) return;
//						pos_player[move_player.back().num].floor = new_floor;
//						move_player.pop_back();
//						map_player[cur_row][cur_col].pop_back();
//					}					
//					break;
//				case 2: 
//					int new_dir = change_dir(cur_dir);
//					move_player.front().dir = new_dir;
//					//map_player[cur_row][cur_col].back().dir = new_dir;
//					nxt_row = cur_row + dir_row[new_dir];
//					nxt_col = cur_col + dir_col[new_dir];
//					if (nxt_row > 0 && nxt_col > 0 && nxt_row <= N && nxt_col <= N) {
//						switch (map[nxt_row][nxt_col]) {
//						case 0:
//							while (!move_player.empty()) {
//								map_player[nxt_row][nxt_col].push_back(move_player.front());
//								pos_player[move_player.front().num].row = nxt_row;
//								pos_player[move_player.front().num].col = nxt_col;
//								int new_floor = map_player[nxt_row][nxt_col].size() - 1;
//								if (new_floor == 3) return;
//								pos_player[move_player.front().num].floor = new_floor;
//								move_player.pop_front();
//								map_player[cur_row][cur_col].pop_back();
//							}
//							break;
//						case 1:
//							while (!move_player.empty()) {
//								map_player[nxt_row][nxt_col].push_back(move_player.back());
//								pos_player[move_player.back().num].row = nxt_row;
//								pos_player[move_player.back().num].col = nxt_col;
//								int new_floor = map_player[nxt_row][nxt_col].size() - 1;
//								if (new_floor == 3) return;
//								pos_player[move_player.back().num].floor = new_floor;
//								move_player.pop_back();
//								map_player[cur_row][cur_col].pop_back();
//							}
//							break;
//						case 2:
//							map_player[cur_row][cur_col].pop_back();
//							map_player[cur_row][cur_col].push_back(move_player.front());
//							break;
//
//						}
//					}
//					else {
//						map_player[cur_row][cur_col].pop_back();
//						map_player[cur_row][cur_col].push_back(move_player.front());
//					}
//				}
//			}
//			else {
//				int new_dir = change_dir(cur_dir);
//				move_player.front().dir = new_dir;
//				//map_player[cur_row][cur_col].back().dir = new_dir;
//				nxt_row = cur_row + dir_row[new_dir];
//				nxt_col = cur_col + dir_col[new_dir];
//				if (nxt_row > 0 && nxt_col > 0 && nxt_row <= N && nxt_col <= N) {
//					switch (map[nxt_row][nxt_col]) {
//					case 0:
//						while (!move_player.empty()) {
//							map_player[nxt_row][nxt_col].push_back(move_player.front());
//							pos_player[move_player.front().num].row = nxt_row;
//							pos_player[move_player.front().num].col = nxt_col;
//							int new_floor = map_player[nxt_row][nxt_col].size() - 1;
//							if (new_floor == 3) return;
//							pos_player[move_player.front().num].floor = new_floor;
//							move_player.pop_front();
//							map_player[cur_row][cur_col].pop_back();
//						}
//						break;
//					case 1:
//						while (!move_player.empty()) {
//							map_player[nxt_row][nxt_col].push_back(move_player.back());
//							pos_player[move_player.back().num].row = nxt_row;
//							pos_player[move_player.back().num].col = nxt_col;
//							int new_floor = map_player[nxt_row][nxt_col].size() - 1;
//							if (new_floor == 3) return;
//							pos_player[move_player.back().num].floor = new_floor;
//							move_player.pop_back();
//							map_player[cur_row][cur_col].pop_back();
//						}
//						break;
//					case 2:
//						map_player[cur_row][cur_col].pop_back();
//						map_player[cur_row][cur_col].push_back(move_player.front());
//						break;
//					}
//				}
//			}
//		}
//	}
//}
//
//int main() {
//	scanf("%d %d", &N, &K);
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= N; j++) {
//			scanf("%d", &map[i][j]);
//		}
//	}
//	for (int i = 0; i < K; i++) {
//		int dir=0, row=0, col=0;
//		scanf("%d %d %d", &row, &col, &dir);
//		player tmp;
//		tmp.dir = dir;
//		tmp.num = i + 1;
//		map_player[row][col].push_back(tmp);
//		player_pos tmp_pos;
//		tmp_pos.row = row;
//		tmp_pos.col = col;
//		tmp_pos.floor = 0;
//		pos_player[tmp.num] = tmp_pos;
//	}
//	moveTurn();
//	if (turn == 1001) printf("-1");
//	else printf("%d", turn);
//	return 0;
//}