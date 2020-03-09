// √‚√≥ : https://www.acmicpc.net/problem/14890
#pragma warning (disable:4996)
#include <cstdio>

int n, l;
int map[101][101];
int gap_map[101][101];
int vis_map[101][101];

int main() {
	scanf("%d %d", &n, &l);
	for (int i = 0; i < n * n; i++) scanf("%d", &map[i / n][i % n]);
	/*for (int i = 0; i < n; i++) {
		for (int j = 0; j < n-1; j++) {
			gap_map[i][j] = map[i][j] - map[i][j + 1 ];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1; j++) {
			printf("%d ",gap_map[i][j]);
		}
		printf("\n");
	}*/

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n-1; j++) {
			int gap_col = map[i][j] - map[i][j + 1];
			if (gap_col == 0) {
				
			}
			else if (gap_col == -1) {
				int cnt = 0;
				while (cnt != l && j - cnt > 0) {
					if (map[i][j - cnt] == map[i][j]) {
						if (vis_map[i][j - cnt] == 0) {
							cnt++;
						}
					}
					else break;
				}
				if (cnt == l) {
					while (cnt > 0) {
						cnt--;
						vis_map[i][j - cnt] = 1;
					}
				}
				if (j - cnt < 0) break;
			}
			else if (gap_col == 1) {
				int cnt = 1;
				while (cnt != l && j + cnt + 2 < n) {
					if (map[i][j + cnt + 1] == map[i][j+1]) {
						if (vis_map[i][j + cnt + 1] == 0) {
							cnt++;
						}
					}
					else break;
				}
				if (cnt == l) {
					while (cnt > 0) {
						cnt--;
						vis_map[i][j + cnt] = 1;
					}
				}
				if (j + cnt > n) break;
			}
			else break;
		}
		printf("\n");
	}
	return 0;
}