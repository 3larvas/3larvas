// √‚√≥ : https://www.acmicpc.net/problem/14890
#pragma warning (disable:4996)
#include <cstdio>

int n, l;
short map[101][101];
int result;

int main() {
	scanf("%d %d", &n, &l);
	for (int i = 0; i < n * n; i++) scanf("%d", &map[i / n][i % n]);

	for (int i = 0; i < n; i++) {
		bool vis_col_map[101] = { 0, };
		int tmp_result = 0;
		for (int j = 0; j < n - 1; j++) {
			int gap_col = map[i][j] - map[i][j + 1];
			if (gap_col == 0) {}
			else if (gap_col == -1) {
				int cnt = 0;
				while (cnt != l) {
					if (j - cnt < 0) goto EXIT_COL;
					if (map[i][j - cnt] == map[i][j] && vis_col_map[j - cnt] == 0) {
						cnt++;
					}
					else goto EXIT_COL;
				}
				if (cnt == l) {
					while (cnt > 0) {
						cnt--;
						vis_col_map[j - cnt] = 1;
					}
				}
			}
			else if (gap_col == 1) {
				int cnt = 0;
				while (cnt != l) {
					if (j + cnt > n) goto EXIT_COL;
					if (map[i][j + cnt + 1] == map[i][j + 1] && vis_col_map[j + cnt + 1] == 0) {
						cnt++;
					}
					else goto EXIT_COL;
				}
				if (cnt == l) {
					while (cnt > 0) {
						cnt--;
						vis_col_map[j + cnt + 1] = 1;
					}
				}
			}
			else break;
			tmp_result++;
		}
	EXIT_COL:;
		if (tmp_result == n - 1) result++;
	}
	for (int i = 0; i < n; i++) {
		bool vis_row_map[101] = { 0, };
		int tmp_result = 0;
		for (int j = 0; j < n - 1; j++) {
			int gap_row = map[j][i] - map[j + 1][i];
			if (gap_row == 0) {}
			else if (gap_row == -1) {
				int cnt = 0;
				while (cnt != l) {
					if (j - cnt < 0)  goto EXIT_ROW;
					if (map[j - cnt][i] == map[j][i] && vis_row_map[j - cnt] == 0) {
						cnt++;
					}
					else goto EXIT_ROW;
				}

				if (cnt == l) {
					while (cnt > 0) {
						cnt--;
						vis_row_map[j - cnt] = 1;
					}
				}
			}
			else if (gap_row == 1) {
				int cnt = 0;
				while (cnt != l) {
					if (j + cnt > n) goto EXIT_ROW;
					if (map[j + cnt + 1][i] == map[j + 1][i] && vis_row_map[j + cnt + 1] == 0) {
						cnt++;
					}
					else goto EXIT_ROW;
				}

				if (cnt == l) {
					while (cnt > 0) {
						cnt--;
						vis_row_map[j + cnt + 1] = 1;
					}
				}
			}
			else break;
			tmp_result++;
		}
	EXIT_ROW:;
		if (tmp_result == n - 1) result++;
	}

	printf("%d", result);
	return 0;
}