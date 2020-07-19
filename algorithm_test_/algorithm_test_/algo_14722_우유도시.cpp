//√‚√≥ : https://www.acmicpc.net/problem/14722
#pragma warning(disable : 4996)
#include <stdio.h>
#include <utility>

using namespace std;
int N;
int map[1001][1001];
pair<int, int> dp[1001][1001];

int main() {
	int start_r = -1, start_c = -1;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			scanf("%d", &map[i][j]);
			if (map[i][j] == 0 && start_r == -1) {
				start_r = i;
				start_c = j;
			}
		}
	}
	dp[start_r][start_c] = make_pair(0, 1);
	for (int i = start_c + 1; i < N; i++) {
		int cur_val = map[start_r][i];
		int pre_val = dp[start_r][i - 1].first;
		switch (cur_val) {
		case 0:
			if (pre_val == 2) dp[start_r][i] = make_pair(cur_val, dp[start_r][i - 1].second + 1);
			else dp[start_r][i] = dp[start_r][i - 1];
			break;
		case 1:
			if (pre_val == 0) dp[start_r][i] = make_pair(cur_val, dp[start_r][i - 1].second + 1);
			else dp[start_r][i] = dp[start_r][i - 1];
			break;
		case 2:
			if (pre_val == 1) dp[start_r][i] = make_pair(cur_val, dp[start_r][i - 1].second + 1);
			else dp[start_r][i] = dp[start_r][i - 1];
			break;
		}
	}
	for (int i = start_r + 1; i < N; i++) {
		int cur_val = map[i][start_c];
		int pre_val = dp[i - 1][start_c].first;
		switch (cur_val) {
		case 0:
			if (pre_val == 2) dp[i][start_c] = make_pair(cur_val, dp[i - 1][start_c].second + 1);
			else dp[i][start_c] = dp[i - 1][start_c];
			break;
		case 1:
			if (pre_val == 0) dp[i][start_c] = make_pair(cur_val, dp[i - 1][start_c].second + 1);
			else dp[i][start_c] = dp[i - 1][start_c];
			break;
		case 2:
			if (pre_val == 1) dp[i][start_c] = make_pair(cur_val, dp[i - 1][start_c].second + 1);
			else dp[i][start_c] = dp[i - 1][start_c];
			break;
		}
	}
	if (start_r != -1) {
		for (int i = start_r + 1; i < N; i++) {
			for (int j = start_c + 1; j < N; j++) {
				int cur_val = map[i][j];
				int pre_val_r = dp[i - 1][j].first;
				int pre_val_c = dp[i][j - 1].first;
				int nxt_val_r = dp[i - 1][j].first;
				int nxt_val_c = dp[i][j - 1].first;
				int nxt_cnt_r = dp[i - 1][j].second;
				int nxt_cnt_c = dp[i][j - 1].second;

				switch (cur_val) {
				case 0:
					if (pre_val_r == 2) {
						nxt_val_r = 0;
						nxt_cnt_r++;
					}
					if (pre_val_c == 2) {
						nxt_val_c = 0;
						nxt_cnt_c++;
					}
					if (nxt_cnt_r > nxt_cnt_c) dp[i][j] = make_pair(nxt_val_r, nxt_cnt_r);
					else dp[i][j] = make_pair(nxt_val_c, nxt_cnt_c);
					break;
				case 1:
					if (pre_val_r == 0) {
						nxt_val_r = 1;
						nxt_cnt_r++;
					}
					if (pre_val_c == 0) {
						nxt_val_c = 1;
						nxt_cnt_c++;
					}
					if (nxt_cnt_r > nxt_cnt_c) dp[i][j] = make_pair(nxt_val_r, nxt_cnt_r);
					else dp[i][j] = make_pair(nxt_val_c, nxt_cnt_c);
					break;
				case 2:
					if (pre_val_r == 1) {
						nxt_val_r = 2;
						nxt_cnt_r++;
					}
					if (pre_val_c == 1) {
						nxt_val_c = 2;
						nxt_cnt_c++;
					}
					if (nxt_cnt_r > nxt_cnt_c) dp[i][j] = make_pair(nxt_val_r, nxt_cnt_r);
					else dp[i][j] = make_pair(nxt_val_c, nxt_cnt_c);
					break;
				}
			}
		}
		printf("%d", dp[N - 1][N - 1].second);
	}
	else
		printf("%d", 0);
	
	return 0;
}
