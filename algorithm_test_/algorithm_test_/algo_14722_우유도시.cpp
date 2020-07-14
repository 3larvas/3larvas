//ÃâÃ³ : https://www.acmicpc.net/problem/14722
#pragma warning(disable : 4996)
#include <stdio.h>
using namespace std;
int state, N;
int map[1001][1001];
int dir_x[2] = { 0, 1 };
int dir_y[2] = { 1, 0 };

bool check_milk(int cur_state, int nxt_state) {
	switch (cur_state) {
		case 0:
			if (nxt_state == 1) return true;
			else return false;
			break;
		case 1:
			if (nxt_state == 2) return true;
			else return false;
			break;
		case 2:
			if (nxt_state == 3) return true;
			else return false;
			break;
		case 3:
			if (nxt_state == 0) return true;
			else return false;
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

	return 0;
}