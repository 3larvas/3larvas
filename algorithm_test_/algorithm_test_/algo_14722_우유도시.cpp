//√‚√≥ : https://www.acmicpc.net/problem/14722
#pragma warning(disable : 4996)
#include <stdio.h>
#include <algorithm>
#include <utility>

using namespace std;
int state, N;
int map[1001][1001];
pair<int, int> dp[1001][1001];
int dir_x[2] = { 0, 1 };
int dir_y[2] = { 1, 0 };

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
	for (int i = start_r + 1; i < N; i++) {
		for (int j = start_c + 1; j < N; j++) {
			int cur_val = map[i][j];
			int pre_val_r = dp[i - 1][j].first;
			int pre_val_c = dp[i][j-1].first;
			int tmp_1=0, tmp_2=0;
			switch (cur_val) {
			case 0:
				if (pre_val_r == 2) tmp_1 = dp[i - 1][j].second + 1;
				if (pre_val_c == 2) tmp_2 = dp[i][j-1].second + 1;
				if(tmp_1 != 0 || tmp_2 != 0) dp[i][j] = make_pair(cur_val, max(tmp_1, tmp_2));
				else dp[i][j] = dp[i - 1][j];
				break;
			case 1:
				if (pre_val_r == 0) tmp_1 = dp[i - 1][j].second + 1;
				if (pre_val_c == 0) tmp_2 = dp[i][j - 1].second + 1;
				if (tmp_1 != 0 || tmp_2 != 0) dp[i][j] = make_pair(cur_val, max(tmp_1, tmp_2));
				else dp[i][j] = dp[i - 1][j];
				break;
			case 2:
				if (pre_val_r == 1) tmp_1 = dp[i - 1][j].second + 1;
				if (pre_val_c == 1) tmp_2 = dp[i][j - 1].second + 1;
				if (tmp_1 != 0 || tmp_2 != 0) dp[i][j] = make_pair(cur_val, max(tmp_1, tmp_2));
				else dp[i][j] = dp[i - 1][j];
				break;
			}
		}
	}
	return 0;
}
