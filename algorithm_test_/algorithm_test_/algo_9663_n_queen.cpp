// √‚√≥ : https://www.acmicpc.net/problem/9663
#pragma warning (disable : 4996)
#include <cstdio>

int  n;
int  disable[16][16];
int  result;
int d_row[4] = { 1,1,-1,-1 };
int d_col[4] = { 1,-1,1,-1 };

void DFS(int cnt, int start_i, int start_j) {
	if (cnt-1 == n) {
		result++;
		return;
	}
	for (int i = start_i+1; i < n; i++) {
		for (int j = start_j+1; j < n; j++) {
			if (!disable[i][j]) {
				for (int k = 0; k < n; k++) 
					if(disable[i][k]==0) disable[i][k] = cnt;
				for (int k = 0; k < n; k++)
					if (disable[k][j] == 0) disable[k][j] = cnt;
				for (int k = 0; k < 4; k++) {
					int nxt_row = i + d_row[k];
					int nxt_col = j + d_col[k];
					while (nxt_row >= 0 && nxt_col >=0 && nxt_row < n && nxt_col < n) {
						if (disable[nxt_row][nxt_col] == 0)	disable[nxt_row][nxt_col] = cnt; 
						nxt_row += d_row[k];
						nxt_col += d_col[k];
					}
				}
				DFS(cnt + 1, i , j);
				for (int k = 0; k < n; k++)
					if (disable[i][k] == cnt) disable[i][k] = 0;
				for (int k = 0; k < n; k++)
					if (disable[k][j] == cnt) disable[k][j] = 0;
				for (int k = 0; k < 4; k++) {
					int nxt_row = i + d_row[k];
					int nxt_col = j + d_col[k];
					while (nxt_row >= 0 && nxt_col >= 0 && nxt_row < n && nxt_col < n) {
						if (disable[nxt_row][nxt_col] == cnt)	disable[nxt_row][nxt_col] = 0;
						nxt_row += d_row[k];
						nxt_col += d_col[k];
					}
				}
			}
		}
	}
}

int main() {
	scanf("%d", &n);
	DFS(1, 0, 0);
	printf("%d", result);
	return 0;
}