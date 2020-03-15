//// √‚√≥ :https://www.acmicpc.net/problem/15683
//#pragma warning (disable:4996)
//#include <cstdio>
//#include <algorithm> 
//using namespace std;
//int n, m;
//short map[9][9];
//int d_one_row[4] = { 0, 0, 1, -1 };
//int d_one_col[4] = { 1, -1, 0, 0 };
//int d_two[4][2] = { {0, 1},
//					{1, 0},
//					{0, -1},
//					{-1, 0}, };
//int d_three[4][4] = { {0, 0, 0, 0},
//					  {1, 1, -1, -1},
//					  {-1, 1, -1, 1},
//					  {0, 0, 0, 0}, };
//int d_four[6][4] = { {0, 0, 0, 1},
//					  {1, 1, 1, 0},
//					  {-1, 1, 1, 0},
//					  {0, 0, 0, -1},
//					  {0, -1, 0, -1},
//					  {-1, 0, -1, 0}, };
//int d_five[8] = { 0,1,1,0,0,-1,-1,0 };
//
//int cam[8][3];
//int cam_idx, cam_size;
//int result = 100;
//
//void DFS(int idx, short tmp[][9]) {
//	int cur_cam_mode = cam[idx][0];
//	int cur_cam_row = cam[idx][1];
//	int cur_cam_col = cam[idx][2];
//	short tmp_tmp[9][9] = { 0, };
//	idx++;
//	switch (cur_cam_mode) {
//	case 1:
//		for (int j = 0; j < 4; j++) {
//			copy(&tmp[0][0], &tmp[0][0] + 9 * 9, &tmp_tmp[0][0]);
//			int nxt_row = cur_cam_row + d_one_row[j];
//			int nxt_col = cur_cam_col + d_one_col[j];
//			while (nxt_row >= 0 && nxt_row < n && nxt_col >= 0 && nxt_col < m) {
//				if (tmp_tmp[nxt_row][nxt_col] != 6) {
//					tmp_tmp[nxt_row][nxt_col] = 7;
//					nxt_row = nxt_row + d_one_row[j];
//					nxt_col = nxt_col + d_one_col[j];
//				}
//				else break;
//			}
//			if (idx == cam_size) {
//				int tmp_result = 0;
//				for (int i = 0; i < n * m; i++) if (tmp_tmp[i / m][i % m] == 0)tmp_result++;
//				if (tmp_result == 0) {
//					result = 0;
//					return;
//				}
//				if (tmp_result < result) result = tmp_result;
//				continue;
//			}
//			else if (idx < cam_size) DFS(idx, tmp_tmp);
//		}
//		break;
//	case 2:
//		for (int j = 0; j < 2; j++) {
//			copy(&tmp[0][0], &tmp[0][0] + 9 * 9, &tmp_tmp[0][0]);
//			int nxt_row = cur_cam_row + d_two[0][j];
//			int nxt_col = cur_cam_col + d_two[1][j];
//			while (nxt_row >= 0 && nxt_row < n && nxt_col >= 0 && nxt_col < m) {
//				if (tmp_tmp[nxt_row][nxt_col] != 6) {
//					tmp_tmp[nxt_row][nxt_col] = 7;
//					nxt_row = nxt_row + d_two[0][j];
//					nxt_col = nxt_col + d_two[1][j];
//				}
//				else break;
//			}
//			nxt_row = cur_cam_row + d_two[2][j];
//			nxt_col = cur_cam_col + d_two[3][j];
//			while (nxt_row >= 0 && nxt_row < n && nxt_col >= 0 && nxt_col < m) {
//				if (tmp_tmp[nxt_row][nxt_col] != 6) {
//					tmp_tmp[nxt_row][nxt_col] = 7;
//					nxt_row = nxt_row + d_two[2][j];
//					nxt_col = nxt_col + d_two[3][j];
//				}
//				else break;
//			}
//			if (idx == cam_size) {
//				int tmp_result = 0;
//				for (int i = 0; i < n * m; i++) if (tmp_tmp[i / m][i % m] == 0)tmp_result++;
//				if (tmp_result == 0) {
//					result = 0;
//					return;
//				}
//				if (tmp_result < result) result = tmp_result;
//				continue;
//			}
//			else if (idx < cam_size) DFS(idx, tmp_tmp);
//		}
//		break;
//	case 3:
//		for (int j = 0; j < 4; j++) {
//			copy(&tmp[0][0], &tmp[0][0] + 9 * 9, &tmp_tmp[0][0]);
//			int nxt_row = cur_cam_row + d_three[0][j];
//			int nxt_col = cur_cam_col + d_three[1][j];
//			while (nxt_row >= 0 && nxt_row < n && nxt_col >= 0 && nxt_col < m) {
//				if (tmp_tmp[nxt_row][nxt_col] != 6) {
//					tmp_tmp[nxt_row][nxt_col] = 7;
//					nxt_row = nxt_row + d_three[0][j];
//					nxt_col = nxt_col + d_three[1][j];
//				}
//				else break;
//			}
//			nxt_row = cur_cam_row + d_three[2][j];
//			nxt_col = cur_cam_col + d_three[3][j];
//			while (nxt_row >= 0 && nxt_row < n && nxt_col >= 0 && nxt_col < m) {
//				if (tmp_tmp[nxt_row][nxt_col] != 6) {
//					tmp_tmp[nxt_row][nxt_col] = 7;
//					nxt_row = nxt_row + d_three[2][j];
//					nxt_col = nxt_col + d_three[3][j];
//				}
//				else break;
//			}
//
//			if (idx == cam_size) {
//				int tmp_result = 0;
//				for (int i = 0; i < n * m; i++) if (tmp_tmp[i / m][i % m] == 0)tmp_result++;
//				if (tmp_result == 0) {
//					result = 0;
//					return;
//				}
//				if (tmp_result < result) result = tmp_result;
//				continue;
//			}
//			else if (idx < cam_size) DFS(idx, tmp_tmp);
//		}
//		break;
//	case 4:
//		for (int j = 0; j < 4; j++) {
//			copy(&tmp[0][0], &tmp[0][0] + 9 * 9, &tmp_tmp[0][0]);
//			int nxt_row = cur_cam_row + d_four[0][j];
//			int nxt_col = cur_cam_col + d_four[1][j];
//			while (nxt_row >= 0 && nxt_row < n && nxt_col >= 0 && nxt_col < m) {
//				if (tmp_tmp[nxt_row][nxt_col] != 6) {
//					tmp_tmp[nxt_row][nxt_col] = 7;
//					nxt_row = nxt_row + d_four[0][j];
//					nxt_col = nxt_col + d_four[1][j];
//				}
//				else break;
//			}
//			nxt_row = cur_cam_row + d_four[2][j];
//			nxt_col = cur_cam_col + d_four[3][j];
//			while (nxt_row >= 0 && nxt_row < n && nxt_col >= 0 && nxt_col < m) {
//				if (tmp_tmp[nxt_row][nxt_col] != 6) {
//					tmp_tmp[nxt_row][nxt_col] = 7;
//					nxt_row = nxt_row + d_four[2][j];
//					nxt_col = nxt_col + d_four[3][j];
//				}
//				else break;
//			}
//			nxt_row = cur_cam_row + d_four[4][j];
//			nxt_col = cur_cam_col + d_four[5][j];
//			while (nxt_row >= 0 && nxt_row < n && nxt_col >= 0 && nxt_col < m) {
//				if (tmp_tmp[nxt_row][nxt_col] != 6) {
//					tmp_tmp[nxt_row][nxt_col] = 7;
//					nxt_row = nxt_row + d_four[4][j];
//					nxt_col = nxt_col + d_four[5][j];
//				}
//				else break;
//			}
//			if (idx == cam_size) {
//				int tmp_result = 0;
//				for (int i = 0; i < n * m; i++) if (tmp_tmp[i / m][i % m] == 0)tmp_result++;
//				if (tmp_result == 0) {
//					result = 0;
//					return;
//				}
//				if (tmp_result < result) result = tmp_result;
//				continue;
//			}
//			else if (idx < cam_size) DFS(idx, tmp_tmp);
//		}
//		break;
//	case 5:
//		copy(&tmp[0][0], &tmp[0][0] + 9 * 9, &tmp_tmp[0][0]);
//		int nxt_row = cur_cam_row + d_five[0];
//		int nxt_col = cur_cam_col + d_five[1];
//		while (nxt_row >= 0 && nxt_row < n && nxt_col >= 0 && nxt_col < m) {
//			if (tmp_tmp[nxt_row][nxt_col] != 6) {
//				tmp_tmp[nxt_row][nxt_col] = 7;
//				nxt_row = nxt_row + d_five[0];
//				nxt_col = nxt_col + d_five[1];
//			}
//			else break;
//		}
//		nxt_row = cur_cam_row + d_five[2];
//		nxt_col = cur_cam_col + d_five[3];
//		while (nxt_row >= 0 && nxt_row < n && nxt_col >= 0 && nxt_col < m) {
//			if (tmp_tmp[nxt_row][nxt_col] != 6) {
//				tmp_tmp[nxt_row][nxt_col] = 7;
//				nxt_row = nxt_row + d_five[2];
//				nxt_col = nxt_col + d_five[3];
//			}
//			else break;
//		}
//		nxt_row = cur_cam_row + d_five[4];
//		nxt_col = cur_cam_col + d_five[5];
//		while (nxt_row >= 0 && nxt_row < n && nxt_col >= 0 && nxt_col < m) {
//			if (tmp_tmp[nxt_row][nxt_col] != 6) {
//				tmp_tmp[nxt_row][nxt_col] = 7;
//				nxt_row = nxt_row + d_five[4];
//				nxt_col = nxt_col + d_five[5];
//			}
//			else break;
//		}
//		nxt_row = cur_cam_row + d_five[6];
//		nxt_col = cur_cam_col + d_five[7];
//		while (nxt_row >= 0 && nxt_row < n && nxt_col >= 0 && nxt_col < m) {
//			if (tmp_tmp[nxt_row][nxt_col] != 6) {
//				tmp_tmp[nxt_row][nxt_col] = 7;
//				nxt_row = nxt_row + d_five[6];
//				nxt_col = nxt_col + d_five[7];
//			}
//			else break;
//		}
//
//		if (idx == cam_size) {
//			int tmp_result = 0;
//			for (int i = 0; i < n * m; i++) if (tmp_tmp[i / m][i % m] == 0)tmp_result++;
//			if (tmp_result < result) result = tmp_result;
//			return;
//		}
//		else if (idx < cam_size) DFS(idx, tmp_tmp);
//		break;
//	}
//}
//
//int main() {
//	scanf("%d %d", &n, &m);
//	for (int i = 0; i < n * m; i++) {
//		scanf("%d", &map[i / m][i % m]);
//		if (map[i / m][i % m] >= 1 && map[i / m][i % m] <= 5) {
//			cam[cam_idx][0] = map[i / m][i % m];
//			cam[cam_idx][1] = i / m;
//			cam[cam_idx][2] = i % m;
//			cam_idx++;
//		}
//	}
//	cam_size = cam_idx;
//	short tmp_map[9][9] = { 0, };
//	copy(&map[0][0], &map[0][0] + 9 * 9, &tmp_map[0][0]);
//
//	if (cam_size > 0) DFS(0, tmp_map);
//	else {
//		result = 0;
//		for (int i = 0; i < n * m; i++) if (map[i / m][i % m] == 0)result++;
//	}
//	printf("%d", result);
//	return 0;
//}