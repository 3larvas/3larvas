//https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AWXRJ8EKe48DFAUo&categoryId=AWXRJ8EKe48DFAUo&categoryType=CODE
#pragma warning (disable : 4996)
#include <stdio.h>
#include <queue>
#define ARR_SIZE 400
#define STEP 20
using namespace std;


struct Cell {
	int r, c, pwr;
	bool act;
	int left_time, left_pwr;
};
struct cmp {
	bool operator()(Cell a, Cell b) {
		return a.left_pwr > b.left_pwr;
	}
};

int T;
priority_queue<Cell, vector<Cell>, cmp> pq;
int map[ARR_SIZE*2][ARR_SIZE*2];
int dir_r[4] = { 0, 0, 1, -1 };
int dir_c[4] = { 1, -1, 0, 0 };


int main() {
	scanf("%d", &T);
	for (int t = 0; t < T; t++) {
		int r = 0, c = 0, k = 0;
		
		scanf("%d %d %d", &r, &c, &k);
		for (int i = 0; i < r; i++) {
			for (int j = 0; j < c; j++) {
				int pwr = 0;
				scanf("%d", &pwr);
				if (pwr != 0) {
					Cell tmp_cell;
					tmp_cell.r = ARR_SIZE + i;
					tmp_cell.c = ARR_SIZE + j;
					tmp_cell.pwr = pwr;
					tmp_cell.left_pwr = tmp_cell.pwr;
					tmp_cell.left_time = tmp_cell.pwr;
					pq.push(tmp_cell);
					map[tmp_cell.r][tmp_cell.c] = tmp_cell.pwr;
				}
			}
		}
		Cell step_cell;
		step_cell.left_pwr = STEP;
		while (!pq.empty()) {
			Cell cur_cell = pq.top();
			if (cur_cell.left_pwr != 0) {
				cur_cell.left_pwr -= 1;
				if (cur_cell.left_pwr == 0)
					cur_cell.act = true;
				
			}

		}
	}
	return 0;
}
