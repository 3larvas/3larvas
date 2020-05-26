#pragma warning(disable : 4996)
#include<stdio.h>
using namespace std;
int B, R, C;
int map_add[17][17];
int map_sub[17][17];
int map_dp[17][17];
int dir_r[3] = { 0, -1, -1 };
int dir_c[3] = { -1, -1, 0 };

int main() {
	scanf("%d", &B);
	scanf("%d %d", &C, &R);
	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			scanf("%d", &map_add[i][j]);
		}
	}
	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			scanf("%d", &map_sub[i][j]);
		}
	}map_dp[0][0] = B;
	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			for (int idx = 0; idx < 3; idx++) {
				int tmp_result = 0;
				int pre_r = i + dir_r[idx];
				int pre_c = j + dir_c[idx];
				if (pre_r >= 0 && pre_r < R && pre_c >= 0 && pre_c < C) {
					if (idx == 1) {
						if (map_dp[pre_r][pre_c] - map_sub[i][j] * 1.4 < 0)
							continue;
					}
					else {
						if (map_dp[pre_r][pre_c] - map_sub[i][j] < 0)
							continue;
					}
					
					if(idx==1) tmp_result = map_dp[pre_r][pre_c] + map_add[i][j] - map_sub[i][j]*1.4;
					else tmp_result = map_dp[pre_r][pre_c] + map_add[i][j] - map_sub[i][j];
					if (tmp_result > B) tmp_result = B;
					if (tmp_result < 0) continue;
					if (tmp_result > map_dp[i][j]) map_dp[i][j] = tmp_result;
				}
			}
		}
	}
	printf("%d", map_dp[R-1][C-1]);
	return 0;
}