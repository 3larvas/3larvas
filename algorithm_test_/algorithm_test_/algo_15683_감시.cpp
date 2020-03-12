// √‚√≥ :https://www.acmicpc.net/problem/15683
#pragma warning (disable:4996)
#include <iostream>
#include <vector>
using namespace std;
int n, m;
int map[9][9];
int d_one_row[4] = { 0, 0, 1, -1 };
int d_one_col[4] = { 1, -1, 0, 0 };
int d_two[4][2] = { {0, 1},
					{1, 0},
					{0, -1},
					{-1, 0}, };
int d_three[4][4] = { {0, 0, 0, 0},
					  {1, 1, -1, -1},
					  {-1, 1, -1, 1},
					  {0, 0, 0, 0}, };

int d_four[6][4] = { {0, 0, 0, 1},
					  {1, 1, 1, 0},
					  {-1, 1, 1, 0},
					  {0, 0, 0, -1},
					  {0, -1, 0, -1},
					  {-1, 0, -1, 0}, };

int d_five[8] = { 0,1,1,0,0,-1,-1,0 };


vector <pair<int, pair<int, int>>> cam;
int result = 100;

void DFS(int idx, int tmp[][9]) {
	//printf("***%d \n", idx);
	int cur_cam_mode = cam.at(idx).first;
	int cur_cam_row = cam.at(idx).second.first;
	int cur_cam_col = cam.at(idx).second.second;
	int tmp_tmp[9][9] = { 0, };
	idx++;
	switch (cur_cam_mode) {
	case 1:
		for (int j = 0; j < 4; j++) {
			copy(&tmp[0][0], &tmp[0][0] + 9 * 9, &tmp_tmp[0][0]);
			int nxt_row = cur_cam_row + d_one_row[j];
			int nxt_col = cur_cam_col + d_one_col[j];
			while (nxt_row >= 0 && nxt_row < n && nxt_col >= 0 && nxt_col < m ) {
				if (tmp_tmp[nxt_row][nxt_col] != 6) {
					tmp_tmp[nxt_row][nxt_col] = 7;
					nxt_row = nxt_row + d_one_row[j];
					nxt_col = nxt_col + d_one_col[j];
				}
				else break;
			}
			/*for (int i = 0; i < n; i++) {
				for (int j = 0; j < m; j++) {
					printf("%d", tmp_tmp[i][j]);
				}
				printf("\n");
			}*/
			if (idx == cam.size()) {
				int tmp_result = 0;
				//printf("yes \n");
				for (int i = 0; i < n * m; i++) {
					if (tmp_tmp[i / m][i % m] == 0)tmp_result++;
				}
				if (tmp_result < result) result = tmp_result;
				continue;
			}
			else if (idx < cam.size()) DFS(idx, tmp_tmp);
		}
		break;
	case 2:
		for (int j = 0; j < 2; j++) {
			copy(&tmp[0][0], &tmp[0][0] + 9 * 9, &tmp_tmp[0][0]);
			int nxt_row = cur_cam_row + d_two[0][j];
			int nxt_col = cur_cam_col + d_two[1][j];
			while (nxt_row >= 0 && nxt_row < n && nxt_col >= 0 && nxt_col < m ) {
				if (tmp_tmp[nxt_row][nxt_col] != 6) {
					tmp_tmp[nxt_row][nxt_col] = 7;
					nxt_row = nxt_row + d_two[0][j];
					nxt_col = nxt_col + d_two[1][j];
				}
				else break;
			}
			nxt_row = cur_cam_row + d_two[2][j];
			nxt_col = cur_cam_col + d_two[3][j];
			while (nxt_row >= 0 && nxt_row < n && nxt_col >= 0 && nxt_col < m) {
				if (tmp_tmp[nxt_row][nxt_col] != 6) {
					tmp_tmp[nxt_row][nxt_col] = 7;
					nxt_row = nxt_row + d_two[2][j];
					nxt_col = nxt_col + d_two[3][j];
				}
				else break;
			}
			/*for (int i = 0; i < n; i++) {
				for (int j = 0; j < m; j++) {
					printf("%d", tmp_tmp[i][j]);
				}
				printf("\n");
			}*/
			if (idx == cam.size()) {
				int tmp_result = 0;
				//printf("yes \n");
				for (int i = 0; i < n * m; i++) {
					if (tmp_tmp[i / m][i % m] == 0)tmp_result++;
				}
				if (tmp_result < result) result = tmp_result;
				continue;
			}
			else if (idx < cam.size()) DFS(idx, tmp_tmp);
		}
		break;
	case 3:
		for (int j = 0; j < 4; j++) {
			copy(&tmp[0][0], &tmp[0][0] + 9 * 9, &tmp_tmp[0][0]);
			int nxt_row = cur_cam_row + d_three[0][j];
			int nxt_col = cur_cam_col + d_three[1][j];
			while (nxt_row >= 0 && nxt_row < n && nxt_col >= 0 && nxt_col < m ) {
				if (tmp_tmp[nxt_row][nxt_col] != 6) {
					tmp_tmp[nxt_row][nxt_col] = 7;
					nxt_row = nxt_row + d_three[0][j];
					nxt_col = nxt_col + d_three[1][j];
				}
				else break;
			}
			nxt_row = cur_cam_row + d_three[2][j];
			nxt_col = cur_cam_col + d_three[3][j];
			while (nxt_row >= 0 && nxt_row < n && nxt_col >= 0 && nxt_col < m ) {
				if (tmp_tmp[nxt_row][nxt_col] != 6) {
					tmp_tmp[nxt_row][nxt_col] = 7;
					nxt_row = nxt_row + d_three[2][j];
					nxt_col = nxt_col + d_three[3][j];
				}
				else break;
			}
			/*for (int i = 0; i < n; i++) {
				for (int j = 0; j < m; j++) {
					printf("%d", tmp_tmp[i][j]);
				}
				printf("\n");
			}*/
			if (idx == cam.size()) {
				int tmp_result = 0;
				//printf("yes \n");
				for (int i = 0; i < n * m; i++) {
					if (tmp_tmp[i / m][i % m] == 0)tmp_result++;
				}
				if (tmp_result < result) result = tmp_result;
				continue;
			}
			else if (idx < cam.size()) DFS(idx, tmp_tmp);
		}
		break;
	case 4:
		for (int j = 0; j < 4; j++) {
			copy(&tmp[0][0], &tmp[0][0] + 9 * 9, &tmp_tmp[0][0]);
			int nxt_row = cur_cam_row + d_four[0][j];
			int nxt_col = cur_cam_col + d_four[1][j];
			while (nxt_row >= 0 && nxt_row < n && nxt_col >= 0 && nxt_col < m ) {
				if (tmp_tmp[nxt_row][nxt_col] != 6) {
					tmp_tmp[nxt_row][nxt_col] = 7;
					nxt_row = nxt_row + d_four[0][j];
					nxt_col = nxt_col + d_four[1][j];
				}
				else break;
			}
			nxt_row = cur_cam_row + d_four[2][j];
			nxt_col = cur_cam_col + d_four[3][j];
			while (nxt_row >= 0 && nxt_row < n && nxt_col >= 0 && nxt_col < m ) {
				if (tmp_tmp[nxt_row][nxt_col] != 6) {
					tmp_tmp[nxt_row][nxt_col] = 7;
					nxt_row = nxt_row + d_four[2][j];
					nxt_col = nxt_col + d_four[3][j];
				}
				else break;
			}
			nxt_row = cur_cam_row + d_four[4][j];
			nxt_col = cur_cam_col + d_four[5][j];
			while (nxt_row >= 0 && nxt_row < n && nxt_col >= 0 && nxt_col < m ) {
				if (tmp_tmp[nxt_row][nxt_col] != 6) {
					tmp_tmp[nxt_row][nxt_col] = 7;
					nxt_row = nxt_row + d_four[4][j];
					nxt_col = nxt_col + d_four[5][j];
				}
				else break;
			}
			/*for (int i = 0; i < n; i++) {
				for (int j = 0; j < m; j++) {
					printf("%d", tmp_tmp[i][j]);
				}
				printf("\n");
			}*/
			if (idx == cam.size()) {
				int tmp_result = 0;
				//printf("yes \n");
				for (int i = 0; i < n * m; i++) {
					if (tmp_tmp[i / m][i % m] == 0)tmp_result++;
				}
				if (tmp_result < result) result = tmp_result;
				continue;
			}
			else if (idx < cam.size()) DFS(idx, tmp_tmp);
		}
		break;
	case 5:
		copy(&tmp[0][0], &tmp[0][0] + 9 * 9, &tmp_tmp[0][0]);
		int nxt_row = cur_cam_row + d_five[0];
		int nxt_col = cur_cam_col + d_five[1];
		while (nxt_row >= 0 && nxt_row < n && nxt_col >= 0 && nxt_col < m ) {
			if (tmp_tmp[nxt_row][nxt_col] != 6) {
				tmp_tmp[nxt_row][nxt_col] = 7;
				nxt_row = nxt_row + d_five[0];
				nxt_col = nxt_col + d_five[1];
			}
			else break;
		}
		nxt_row = cur_cam_row + d_five[2];
		nxt_col = cur_cam_col + d_five[3];
		while (nxt_row >= 0 && nxt_row < n && nxt_col >= 0 && nxt_col < m) {
			if (tmp_tmp[nxt_row][nxt_col] != 6) {
				tmp_tmp[nxt_row][nxt_col] = 7;
				nxt_row = nxt_row + d_five[2];
				nxt_col = nxt_col + d_five[3];
			}
			else break;
		}
		nxt_row = cur_cam_row + d_five[4];
		nxt_col = cur_cam_col + d_five[5];
		while (nxt_row >= 0 && nxt_row < n && nxt_col >= 0 && nxt_col < m) {
			if (tmp_tmp[nxt_row][nxt_col] != 6) {
				tmp_tmp[nxt_row][nxt_col] = 7;
				nxt_row = nxt_row + d_five[4];
				nxt_col = nxt_col + d_five[5];
			}
			else break;
		}
		nxt_row = cur_cam_row + d_five[6];
		nxt_col = cur_cam_col + d_five[7];
		while (nxt_row >= 0 && nxt_row < n && nxt_col >= 0 && nxt_col < m ) {
			if (tmp_tmp[nxt_row][nxt_col] != 6) {
				tmp_tmp[nxt_row][nxt_col] = 7;
				nxt_row = nxt_row + d_five[6];
				nxt_col = nxt_col + d_five[7];
			}
			else break;
		}
		/*for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				printf("%d", tmp_tmp[i][j]);
			}
			printf("\n");
		}*/
		if (idx == cam.size()) {
			int tmp_result = 0;
			//printf("yes \n");
			for (int i = 0; i < n * m; i++) {
				if (tmp_tmp[i / m][i % m] == 0)tmp_result++;
			}
			if (tmp_result < result) result = tmp_result;
			return;
		}
		else if (idx < cam.size()) DFS(idx, tmp_tmp);
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