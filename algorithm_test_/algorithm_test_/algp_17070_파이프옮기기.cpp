// √‚√≥ : https://www.acmicpc.net/problem/17070
#pragma warning(disable : 4996)
#include <stdio.h>
using namespace std;
int N;
int map[17][17];

int dir_1_r[2] = { 0,1 };
int dir_1_c[2] = { 1,1 };
int dir_2_r[3] = { 0,1,1 };
int dir_2_c[3] = { 1,1,0 };
int dir_3_r[2] = { 1,1 };
int dir_3_c[2] = { 1,0 };

int result;

void DFS(int r, int c, int type) {
	int nxt_r = 0;
	int nxt_c = 0;
	if (r == N-1 && c == N-1) {
		result++;
		return;
	}
	switch (type) {
	case 1:
		for (int i = 0; i < 2; i++) {
			nxt_r = r + dir_1_r[i];
			nxt_c = c + dir_1_c[i];
			if (0 <= nxt_r && nxt_r < N && 0 <= nxt_c && nxt_c < N) {
				if (i == 0) DFS(nxt_r, nxt_c, 1);
				else if(i==1) DFS(nxt_r, nxt_c, 2);
			}
		}
		break;
	case 2:
		for (int i = 0; i < 3; i++) {
			nxt_r = r + dir_2_r[i];
			nxt_c = c + dir_2_c[i];
			if (0 <= nxt_r && nxt_r < N && 0 <= nxt_c && nxt_c < N) {
				if (i == 0) DFS(nxt_r, nxt_c, 1);
				else if (i == 1) DFS(nxt_r, nxt_c, 2);
				else if (i == 2) DFS(nxt_r, nxt_c, 3);
			}
		}
		break;
	case 3:
		for (int i = 0; i < 2; i++) {
			nxt_r = r + dir_3_r[i];
			nxt_c = c + dir_3_c[i];
			if (0 <= nxt_r && nxt_r < N && 0 <= nxt_c && nxt_c < N) {
				if (i == 0) DFS(nxt_r, nxt_c, 2);
				else if (i == 1) DFS(nxt_r, nxt_c, 3);
			}
		}
		break;
	}
}

int main() {
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			scanf("%d", &map[i][j]);
		}
	}
	DFS(0, 1, 1);
	printf("%d", result);
	return 0;
}