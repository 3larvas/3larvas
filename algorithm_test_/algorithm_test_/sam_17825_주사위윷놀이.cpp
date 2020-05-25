//https://www.acmicpc.net/problem/17825
#pragma warning(disable : 4996)
#include <stdio.h>
using namespace std;

int map[24][4] =
{
	{0 , 0, 0, 0},
	{2 , 0, 0, 0},
	{4 , 0, 0, 0},
	{6 , 0, 0, 0},
	{8 , 0, 0, 0},
	{10, 0, 0, 0},
	{12, 13, 0, 0},
	{14, 16, 0, 0},
	{16, 19, 0, 0},
	{18, 25, 0, 0},
	{20, 30, 0, 0},
	{22, 35, 22, 0},
	{24, 40, 24, 0},
	{26, 0, 25, 0},
	{28, 0, 30, 0},
	{30, 0, 35, 0},
	{32, 0, 40, 28},
	{34, 0, 0, 27},
	{36, 0, 0, 26},
	{38, 0, 0, 25},
	{40, 0, 0, 30},
	{0, 0, 0, 35},
	{0, 0, 0, 40},
	{0, 0, 0, 0}
};
struct player {
	int  step, type, value;
	bool chk;

};
int input[10];
player player_list[4];

void DFS(int cnt) {
	if (cnt == 10) {
		printf("END\n");
		return;
	}
	for (int i = 0; i < 4; i++) {
		player_list[i].step  += input[cnt];
		player_list[i].value += map[player_list[i].step][player_list[i].type];
		if (player_list[i].step % 10 == 0) {
			switch (map[player_list[i].step][player_list[i].type]) {
			case 10:
				player_list[i].type = 1;
				break;
			case 20:
				player_list[i].type = 2;
				break;
			case 30:
				player_list[i].type = 3;
				break;
			}
		}
		switch (player_list[i].type) {
		case 0:
			if (player_list[i].step >= 20)
				return;
			break;
		case 1:
			if (player_list[i].step >= 12)
				return;
			break;
		case 2:
			if (player_list[i].step >= 16)
				return;
			break;
		case 3:
			if (player_list[i].step >= 23)
				return;
			break;
		}
		
		DFS(cnt + 1);
	}

}

int main() {
	for (int i = 0; i < 10; i++)
		scanf("%d", &input[i]);

	DFS(0);
	return 0;
}