// https://www.acmicpc.net/problem/13460
#pragma warning (disable : 4996)
#include <stdio.h>
#include <queue>
using namespace std;

int n, m;
char  map[11][11];
int   arr_map[11][11];
bool  arr_vis[11][11][11][11];
int dir_x[4] = { 0, 0, 1, -1 };
int dir_y[4] = { 1, -1, 0, 0 };

struct ball_info{
	int cnt = 0;
	int red_x, red_y, blu_x, blu_y;
};

queue<ball_info> q;
ball_info start;
int result = -1;

int BFS() {
	arr_vis[start.red_x][start.red_y][start.blu_x][start.blu_y] = 1;
	q.push(start);
	while (!q.empty()) {
		ball_info cur_ball = q.front();
		q.pop();
		if (cur_ball.cnt > 10) return -1;
		for (int i = 0; i < 4; i++) {
			int cur_red_x = cur_ball.red_x;
			int cur_red_y = cur_ball.red_y;
			int cur_blu_x = cur_ball.blu_x;
			int cur_blu_y = cur_ball.blu_y;
			while (arr_map[cur_red_y + dir_y[i]][cur_red_x + dir_x[i]] != 1) {
				cur_ball.red_x += dir_x[i];
				cur_ball.red_y += dir_y[i];
			}
			while (arr_map[cur_blu_y + dir_y[i]][cur_blu_x + dir_x[i]] != 1) {
				cur_ball.blu_x += dir_x[i];
				cur_ball.blu_y += dir_y[i];
			}
		}
		q.push(cur_ball);
	}
}

int main() {
	scanf("%d %d", &n, &m);
	for (int i = 0; i < m; i++) {
		scanf("%s", &map[i][0]);
		for (int j = 0; j < n; j++) {
			switch(map[i][j]) {
			case '.':
				arr_map[i][j] = 0;
				break;
			case '#':
				arr_map[i][j] = 1;
				break;
			case 'O':
				arr_map[i][j] = 2;
				break;
			case 'R':
				arr_map[i][j] = 3;
				start.red_x = j;
				start.red_y = i;
				break;
			case 'B':
				arr_map[i][j] = 4;
				start.blu_x = j;
				start.blu_y = i;
				break;
			}
		}
	}
	BFS();
	return 0;
}