// √‚√≥ : https://www.acmicpc.net/problem/1149
#pragma warning(disable : 4996)
#include <cstdio>
int n;
int cost[1001][3];
int dp[1001][3];
int min(int a, int b) {
	return a < b ? a : b;
}

int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d %d %d", &cost[i][0], &cost[i][1], &cost[i][2]);
	
	for (int i = 1; i <= n; i++) {
		dp[i][0] = min(dp[i-1][1], dp[i-1][2]) + cost[i-1][0];
		dp[i][1] = min(dp[i-1][0], dp[i-1][2]) + cost[i-1][1];
		dp[i][2] = min(dp[i-1][0], dp[i-1][1]) + cost[i-1][2];
	}
	printf("%d", min(min(dp[n][0], dp[n][1]), min(dp[n][1], dp[n][2])));
	return 0;
}