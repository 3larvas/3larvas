// √‚√≥ :https://www.acmicpc.net/problem/15683
#pragma warning (disable:4996)
#include <iostream>
#include <vector>
using namespace std;
int n, m;
int map[9][9];
int d_four_row[4] = { 0, 0, 1, -1 };
int d_four_col[4] = { 1, -1, 0, 0 };

vector <pair<int, pair<int, int>>> cam;
int result=100;

void DFS(int idx, int tmp[][9]) {
	printf("***%d \n", idx);
	int cur_cam_mode = cam.at(idx).first;
	int cur_cam_row  = cam.at(idx).second.first;
	int cur_cam_col  = cam.at(idx).second.second;
	int tmp_tmp[9][9] = { 0, };
	idx++;
	switch (cur_cam_mode) {
	case 1:
		for (int j = 0; j < 4; j++) {
			copy(&tmp[0][0], &tmp[0][0] + 9 * 9, &tmp_tmp[0][0]);
			int nxt_row = cur_cam_row + d_four_row[j];
			int nxt_col = cur_cam_col + d_four_col[j];
			while (nxt_row >= 0 && nxt_row < n && nxt_col >= 0 && nxt_col < m && map[nxt_row][nxt_col] != 6) {
				tmp_tmp[nxt_row][nxt_col] = 7;
				nxt_row = nxt_row + d_four_row[j];
				nxt_col = nxt_col + d_four_col[j];
			}
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < m; j++) {
					printf("%d", tmp_tmp[i][j]);
				}
				printf("\n");
			}
			if (idx == cam.size()) {
				int tmp_result = 0;
				printf("yes \n");
				for (int i = 0; i < n * m; i++) {
					if (tmp_tmp[i / m][i % m] == 0)tmp_result++;
				}
				if (tmp_result < result) result = tmp_result;
				continue;
			} 
			if (idx <= cam.size()) DFS(idx, tmp_tmp);
		}
		break;
	case 2:
		for (int j = 0; j < 2; j++) {
			copy(&tmp[0][0], &tmp[0][0] + 9 * 9, &tmp_tmp[0][0]);
			int nxt_row = cur_cam_row + d_four_row[j];
			int nxt_col = cur_cam_col + d_four_col[j];
			while (nxt_row >= 0 && nxt_row < n && nxt_col >= 0 && nxt_col < m && map[nxt_row][nxt_col] != 6) {
				tmp_tmp[nxt_row][nxt_col] = 7;
				nxt_row = nxt_row + d_four_row[j];
				nxt_col = nxt_col + d_four_col[j];
			}
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < m; j++) {
					printf("%d", tmp_tmp[i][j]);
				}
				printf("\n");
			}
			if (idx == cam.size()) {
				int tmp_result = 0;
				printf("yes \n");
				for (int i = 0; i < n * m; i++) {
					if (tmp_tmp[i / m][i % m] == 0)tmp_result++;
				}
				if (tmp_result < result) result = tmp_result;
				continue;
			}
			if (idx <= cam.size()) DFS(idx, tmp_tmp);
		}
		break;
	case 3:
		break;
	case 4:
		break;
	case 5:
		break;
	}
}

int main() {
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n * m; i++) {
		scanf("%d", &map[i / m][i % m]);
		if (map[i / m][i % m] >= 1 && map[i / m][i % m] <= 5) 
			cam.push_back(make_pair(map[i / m][i % m], make_pair(i / m, i % m)));
	}
	int tmp_map[9][9] = { 0, };
	copy(&map[0][0], &map[0][0] + 9 * 9, &tmp_map[0][0]);
	DFS(0, tmp_map);
	printf("%d", result);
	return 0;
}