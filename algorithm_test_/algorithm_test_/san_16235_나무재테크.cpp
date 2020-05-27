//https://www.acmicpc.net/problem/16235
#pragma warning (disable : 4996)
#include <stdio.h>
#include <queue>
using namespace std;
struct tree_info {
	priority_queue <int> tree_list;
	int eng;
	int die_eng;
	int new_cnt;
};
tree_info tree_map[11][11][1001];
int N, M, K;
int add_map[11][11];
int dir_r[8] = { -1, -1, 0, 1, 1, 1, 0, -1 };
int dir_c[8] = { 0, 1, 1, 1, 0, -1, -1, -1 };
int result;

int main() {
	scanf("%d %d %d", &N, &M, &K);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			scanf("%d", &add_map[i][j]);
			tree_map[i][j][0].eng = 5;
		}
	}
	for (int i = 0; i < M; i++) {
		int x = 0, y = 0, year = 0;
		scanf("%d %d %d", &x, &y, &year);
		tree_map[y][x][0].tree_list.push(year);
	}
	for (int y = 1; y <= K; y++) {
		printf("before spring : %d year\n", y);
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				printf("(%d, %d)", tree_map[i][j][y - 1].tree_list.size(), tree_map[i][j][y - 1].eng);
			}
			printf("\n");
		}
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				tree_info cur_map = tree_map[i][j][y-1];
				if (cur_map.tree_list.size() != 0) {
					while (!cur_map.tree_list.empty()) {
						if (cur_map.eng - cur_map.tree_list.top() >= 0) {
							cur_map.eng -= cur_map.tree_list.top();
							tree_map[i][j][y].tree_list.push(cur_map.tree_list.top() + 1);
							if ((cur_map.tree_list.top() + 1) % 5 == 0)
								cur_map.new_cnt+=1;
							cur_map.tree_list.pop();
						}
						else {
							cur_map.die_eng += cur_map.tree_list.top()/2;
							cur_map.tree_list.pop();
						}
					}
				}
				// summer step
				tree_map[i][j][y].eng = cur_map.eng + cur_map.die_eng;
				tree_map[i][j][y].new_cnt = cur_map.new_cnt;
			}
		}
		printf("after summer : %d year\n", y);
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				printf("(%d, %d)", tree_map[i][j][y].tree_list.size(), tree_map[i][j][y].eng);
			}
			printf("\n");
		}
		//start fall
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				tree_info cur_map = tree_map[i][j][y];
				for (int k = 0; k < cur_map.new_cnt; k++) {
					for (int l = 0; l < 8; l++) {
						int nxt_r = i + dir_r[l];
						int nxt_c = j + dir_c[l];
						if (nxt_r >= 0 && nxt_r < N && nxt_c >= 0 && nxt_c < N) {
							tree_map[nxt_r][nxt_c][y].tree_list.push(1);
						}
					}
				}
				tree_map[i][j][y].eng += add_map[i][j];
			}
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			tree_info cur_map = tree_map[i][j][K];
			if (cur_map.tree_list.size() != 0) {
				result += cur_map.tree_list.size();
			}
		}
	}
	printf("final ========\n");
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			printf("(%d, %d)", tree_map[i][j][K].tree_list.size(), tree_map[i][j][K].eng);
		}
		printf("\n");
	}

	printf("%d", result);
	return 0;
}