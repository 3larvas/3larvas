////https://www.acmicpc.net/problem/17825
//#pragma warning(disable : 4996)
//#include <stdio.h>
//#include <vector>
//using namespace std;
//
//int map[24][4] =
//{
//	{0 , 0, 0, 0},
//	{2 , 0, 0, 0},
//	{4 , 0, 0, 0},
//	{6 , 0, 0, 0},
//	{8 , 0, 0, 0},
//	{10, 0, 0, 0},
//	{12, 13, 0, 0},
//	{14, 16, 0, 0},
//	{16, 19, 0, 0},
//	{18, 25, 0, 0},
//	{20, 30, 0, 0},
//	{22, 35, 22, 0},
//	{24, 40, 24, 0},
//	{26, 0, 25, 0},
//	{28, 0, 30, 0},
//	{30, 0, 35, 0},
//	{32, 0, 40, 28},
//	{34, 0, 0, 27},
//	{36, 0, 0, 26},
//	{38, 0, 0, 25},
//	{40, 0, 0, 30},
//	{0, 0, 0, 35},
//	{0, 0, 0, 40},
//	{0, 0, 0, 0}
//};
//struct player {
//	int  step, type, value, cnt;
//	bool chk;
//	vector<pair<int,int>> ser;
//
//};
//int input[10];
//player player_list[4];
//int result;
//int cnt_t;
//
//void DFS(int cnt) {
//	if (cnt == 10) {
//		cnt_t++;
//		//printf("%d\n", player_list[0].value + player_list[1].value + player_list[2].value + player_list[3].value);
//		int tmp_result = player_list[0].value + player_list[1].value + player_list[2].value + player_list[3].value;
//		if (tmp_result > result) result = tmp_result;
//		if (tmp_result == 214) {
//			printf("");
//		}
//		return;
//	}
//	bool dup_chk = false;
//	for (int i = 0; i < 4; i++) {
//		if (player_list[i].chk) continue;
//		for (int j = 0; j < 4; j++) {
//			if (i != j && player_list[j].step == player_list[i].step + input[cnt]) {
//				dup_chk = true;
//				break;
//			}
//			int tmp_val = map[player_list[i].step + input[cnt]][player_list[i].type];
//			if (tmp_val == map[player_list[j].step][player_list[j].type]) {
//				switch (tmp_val) {
//				case 25:
//					dup_chk = true;
//					break;
//				case 40:
//					dup_chk = true;
//					break;
//				}
//			}
//		}
//		if (dup_chk) {
//			dup_chk = false;
//			continue;
//		}
//		player pre_player = player_list[i];
//		player_list[i].step  += input[cnt];
//		player_list[i].value += map[player_list[i].step][player_list[i].type];
//		player_list[i].ser.push_back(make_pair(input[cnt],cnt));
//		player_list[i].cnt++;
//		int pre_type = player_list[i].type;
//		if (map[player_list[i].step][player_list[i].type]%10==0 && player_list[i].type==0) {
//			switch (map[player_list[i].step][player_list[i].type]) {
//			case 10:
//				player_list[i].type = 1;
//				break;
//			case 20:
//				player_list[i].type = 2;
//				break;
//			case 30:
//				player_list[i].type = 3;
//				break;
//			}
//		}
//		switch (player_list[i].type) {
//		case 0:
//			if (player_list[i].step >= 21) {
//				player_list[i].step *= -1;
//				player_list[i].chk = true;
//			}
//			break;
//		case 1:
//			if (player_list[i].step >= 13) {
//				player_list[i].step *= -1;
//				player_list[i].chk = true;
//			}
//			break;
//		case 2:
//			if (player_list[i].step >= 17) {
//				player_list[i].step *= -1;
//				player_list[i].chk = true;
//			}
//			break;
//		case 3:
//			if (player_list[i].step >= 23) {
//				player_list[i].step *= -1;
//				player_list[i].chk = true;
//			}
//			break;
//		}
//		DFS(cnt + 1);
//		player_list[i] = pre_player;
//	}
//}
//
//int main() {
//	for (int i = 0; i < 10; i++)
//		scanf("%d", &input[i]);
//	DFS(0);
//	printf("%d", result);
//	return 0;
//}